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

3. Install GLEW, GLFW3, DevIL, Boost.Any and SFML by running:
```shell
$ path/to/vcpkg/vcpkg.exe install glew glfw3 devil boost-any sfml
```
*This may take several minutes*

4. Run:
```shell
$ path/to/vcpkg/vcpkg.exe integrate install
```

## Initialising CMake with vcpkg
1. Press `⊞ + S` and search for "CMake GUI". Open CMake-GUI as admin.
2. Set source directory as the Rubeus repository root. Set the build directory as the same as source directory. Click on `Configure`.
3. Select `Visual Studio 15 2017` as the generator. Select `Specify native compilers`. Click on `Next`.
4. Specify the C and C++ MinGW compiler locations. Most probably they can be in `C:/MinGW/bin/`. Leave Fortran compiler location empty. Click `Finish`.
5. When CMake-GUI finishes the configuration, click `Generate`.
5. Now you will observe that there is a `RubeusCore.sln` file in `Rubeus/`.

## Setting up Rubeus source in Visual Studio 2017
1. Open `RubeusCore.sln` in VS and right click on `RubeusCore` and `Set as StartUp project`. [Screenshot](https://imgur.com/a/xadxwsG)
2. All `.h` files will be present in `/RubeusCore/Include` and all of their implementations(if any) will be present in `/RubeusCore/Source` as `.cpp` files. No need to edit CMakeLists.txt anywhere unless there are any linking errors popping up.

## Building Rubeus in Visual Studio 2017
1. Open `RubeusCore.sln` (generates after running CMake).
2. Check if you are running in Debug mode (Drop down in the top bar) and press F5.

All libraries are relatively linked thus your project is ready to boot up in Visual Studio. Remember to go through the [contribution guidelines](CONTRIBUTING.md) for further guidance.
