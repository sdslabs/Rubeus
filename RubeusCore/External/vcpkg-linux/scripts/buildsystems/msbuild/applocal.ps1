[cmdletbinding()]
param([string]$targetBinary, [string]$installedDir, [string]$tlogFile, [string]$copiedFilesLog)

$g_searched = @{}
# Note: installedDir is actually the bin\ directory.
$g_install_root = Split-Path $installedDir -parent
$g_is_debug = $g_install_root -match '(.*\\)?debug(\\)?$'

# Ensure we create the copied files log, even if we don't end up copying any files
if ($copiedFilesLog)
{
    Set-Content -Path $copiedFilesLog -Value "" -Encoding Ascii
}

# Note: this function signature is depended upon by the qtdeploy.ps1 script introduced in 5.7.1-7
function deployBinary([string]$targetBinaryDir, [string]$SourceDir, [string]$targetBinaryName) {
    if (Test-Path "$targetBinaryDir\$targetBinaryName") {
        Write-Verbose "  ${targetBinaryName}: already present"
    }
    else {
        Write-Verbose "  ${targetBinaryName}: Copying $SourceDir\$targetBinaryName"
        Copy-Item "$SourceDir\$targetBinaryName" $targetBinaryDir
    }
    if ($copiedFilesLog) { Add-Content $copiedFilesLog "$targetBinaryDir\$targetBinaryName" }
    if ($tlogFile) { Add-Content $tlogFile "$targetBinaryDir\$targetBinaryName" }
}


Write-Verbose "Resolving base path $targetBinary..."
try
{
    $baseBinaryPath = Resolve-Path $targetBinary -erroraction stop
    $baseTargetBinaryDir = Split-Path $baseBinaryPath -parent
}
catch [System.Management.Automation.ItemNotFoundException]
{
    return
}

# Note: this function signature is depended upon by the qtdeploy.ps1 script
function resolve([string]$targetBinary) {
    Write-Verbose "Resolving $targetBinary..."
    try
    {
        $targetBinaryPath = Resolve-Path $targetBinary -erroraction stop
    }
    catch [System.Management.Automation.ItemNotFoundException]
    {
        return
    }
    $targetBinaryDir = Split-Path $targetBinaryPath -parent

    $a = $(dumpbin /DEPENDENTS $targetBinary | ? { $_ -match "^    [^ ].*\.dll" } | % { $_ -replace "^    ","" })
    $a | % {
        if ([string]::IsNullOrEmpty($_)) {
            return
        }
        if ($g_searched.ContainsKey($_)) {
            Write-Verbose "  ${_}: previously searched - Skip"
            return
        }
        $g_searched.Set_Item($_, $true)
        if (Test-Path "$installedDir\$_") {
            deployBinary $baseTargetBinaryDir $installedDir "$_"
            if (Test-Path function:\deployPluginsIfQt) { deployPluginsIfQt $targetBinaryDir "$g_install_root\plugins" "$_" }
            if (Test-Path function:\deployOpenNI2) { deployOpenNI2 $targetBinaryDir "$g_install_root" "$_" }
            if (Test-Path function:\deployPluginsIfMagnum) {
                if ($g_is_debug) {
                    deployPluginsIfMagnum $targetBinaryDir "$g_install_root\bin\magnum-d" "$_"
                } else {
                    deployPluginsIfMagnum $targetBinaryDir "$g_install_root\bin\magnum" "$_"
                }
            }
            resolve "$baseTargetBinaryDir\$_"
        } elseif (Test-Path "$targetBinaryDir\$_") {
            Write-Verbose "  ${_}: $_ not found in vcpkg; locally deployed"
            resolve "$targetBinaryDir\$_"
        } else {
            Write-Verbose "  ${_}: $installedDir\$_ not found"
        }
    }
    Write-Verbose "Done Resolving $targetBinary."
}

# Note: This is a hack to make Qt5 work.
# Introduced with Qt package version 5.7.1-7
if (Test-Path "$g_install_root\plugins\qtdeploy.ps1") {
    . "$g_install_root\plugins\qtdeploy.ps1"
}

# Note: This is a hack to make OpenNI2 work.
if (Test-Path "$g_install_root\bin\OpenNI2\openni2deploy.ps1") {
    . "$g_install_root\bin\OpenNI2\openni2deploy.ps1"
}

# Note: This is a hack to make Magnum work.
if (Test-Path "$g_install_root\bin\magnum\magnumdeploy.ps1") {
    . "$g_install_root\bin\magnum\magnumdeploy.ps1"
} elseif (Test-Path "$g_install_root\bin\magnum-d\magnumdeploy.ps1") {
    . "$g_install_root\bin\magnum-d\magnumdeploy.ps1"
}

resolve($targetBinary)
Write-Verbose $($g_searched | out-string)
