<p>
<h1 align=center><strong>Setting up Rubeus on Windows</strong></h1>
<p/>

<p align=center>
Created by SDSLabs with :heart:
</p>

## Setting up the build environment
1. Install [Microsoft Visual Studio 2017 or above](https://www.visualstudio.com/)
2. Rubeus uses Visual Leak Detector v2.5.1 for catching memory leaks. Find it [here](https://github.com/KindDragon/vld/releases/tag/v2.5.1). However, if you wish to not use this tool, just remove `add_definitions(-DVLD)` from `/RubeusCore/CMakeLists.txt`.
3. Install [CMake](https://cmake.org/) (preferably a version above or same as 3.11).
4. Clone this repository:
```shell
$ git clone https://github.com/sdslabs/Rubeus
```

## Building required dependencies
1. Install [Vcpkg](https://github.com/Microsoft/vcpkg), a cross-platform C++ package manager and place it in a suitable directory. Follow basic installation commands provided in the vcpkg readme. Make sure you have a version above or same as 0.0.113.
2. Update vcpkg first:
```shell
$ path/to/vcpkg/vcpkg.exe update
```
3. Install GLEW, OpenGL Extension Wrangler library (preferably glew:x86-windows) by running:
```shell
$ path/to/vcpkg/vcpkg.exe install glew
```
4. Install GLFW, OpenGL Graphics Framework (preferably glfw3:x86-windows 3.2.1-2) by running:
```shell
$ path/to/vcpkg/vcpkg.exe install glfw3
```
5. Install DevIL, Developer Image Library (preferably devil:x86-windows) by running:
```shell
$ path/to/vcpkg/vcpkg.exe install devil
```
6. Install Boost.Any, Boost::Any C++ utility library(boost-any:x86-windows) by running:
```shell
$ path/to/vcpkg/vcpkg.exe install boost-any
```
7. Install SFML, Simple & Fast Media Library (sfml:x86-windows) by running:
```shell
$ path/to/vcpkg/vcpkg.exe install sfml
```

## Initialising CMake with vcpkg
1. For VS 2017 project files, press `⊞ Win + X` and choose `Command Prompt(Admin)` from the dialog box.
2. Open CMake GUI. Select `Visual Studio project files` from the drop down menu and set source code and build destination as the same as the repository directory.
3. Select 'Specify options for cross-compiling with CMake'. Specify the platform name (i.e. Windows) and specify the C and C++ compilers (`gcc.exe` and `g++.exe` preferably). Click on `Configure`. 
4. Navigate to the cloned repository. 
> Quick-tips: For CMD, `X:` command will navigate to the X: drive. `dir` command works the same as the Unix `ls -la` and `cd` still works the same. You can also use Git Bash for general navigation.
5. To use libraries acquired by vcpkg, run:
```shell
$ path/to/vcpkg/vcpkg.exe integrate install
```
6. Instruct CMake to acquire libraries already built by vcpkg, by running:
```shell
$ cmake -DCMAKE_TOOLCHAIN_FILE=path/to/vcpkg/scripts/buildsystems/vcpkg.cmake ./
```
7. Run CMake by executing:
```shell
$ cmake ./
```

## Setting up Rubeus source in Visual Studio 2017
1. Open `RubeusCore.sln` in VS and right click on `RubeusCore` and `Set as StartUp project`. [Screenshot](https://imgur.com/a/xadxwsG)
2. All `.h` files will be present in `/RubeusCore/Include` and all of their implementations(if any) will be present in `/RubeusCore/Source` as `.cpp` files. No need to edit CMakeLists.txt anywhere unless there are any linking errors popping up.

## Building Rubeus in Visual Studio 2017
1. Open `RubeusCore.sln` (generates after running CMake).
2. Check if you are running in Debug mode and press F5.

All libraries are relatively linked thus your project is ready to boot up in Visual Studio. Remember to go through the [contribution guidelines](CONTRIBUTING.md) for further guidance.
