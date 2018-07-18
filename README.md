# Rubeus
A 2D game engine written in C++17 using OpenGL 3.3
# Setup
## Setting up the build environment
1. Be on Windows
2. Install Microsoft Visual Studio 2017 [here](https://www.visualstudio.com/)
3. Rubeus uses Visual Leak Detector v2.5.1 for catching memory leaks. Get it [here](https://github.com/KindDragon/vld/releases/tag/v2.5.1). However, if you wish to not use this tool, just remove `add_definitions(-DVLD)` from /RubeusCore/CMakeLists.txt.
4. Clone this repository:
```shell
$ git clone https://github.com/sdslabs/Rubeus
```

## Building required dependencies
1. Install Vcpkg, a cross-platform C++ package manager from [here](https://github.com/Microsoft/vcpkg) in a suitable directory. Follow basic installation commands provided in the link.
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

## Initialising CMake with vcpkg
1. For VS 2017 project files, press `⊞ Win + X` and choose `Command Prompt(Admin)` from the dialog box.
2. Open CMake GUI. Set source code and build destination as the same as the repository directory. Click on Configure.
3. Select 'Specify options for cross-compiling with CMake'. Specify a platform name and specify the C/C++ compiler directories(gcc.exe and g++.exe preferably).
4. Navigate to the cloned repository. Quick-tips: `X:` command will navigate to the X: drive. `dir` command works the same as the Unix `ls -la` and `cd` still works the same.
5. Instruct CMake to acquire libraries already built by vcpkg, by running:
```shell
$ cmake -DCMAKE_TOOLCHAIN_FILE=path/to/vcpkg/scripts/buildsystems/vcpkg.cmake ./
```
6. Run CMake by executing ```cmake ./ ```

## Setting up Rubeus source in Visual Studio 2017
1. Open `RubeusCore.sln` in VS and right click on `RubeusCore` and `Set as StartUp project`. [Screenshot](https://imgur.com/a/xadxwsG)
2. Place all `.dll` files from `/RubeusCore/Dependencies/` to `/RubeusCore/Debug/` and `/RubeusCore/Release`.
3. All `.h` files will be present in `/RubeusCore/Include` and all of their implementations(if any) will be present in `/RubeusCore/Source` as `.cpp` files. No need to edit CMakeLists.txt anywhere unless there are any linking errors popping up.

All libraries are relatively linked thus your project is ready to boot up in Visual Studio. Remember to go through the code conventions [here](https://1drv.ms/f/s!AsFPvDFrZ9iShQpWe_rBZgVLPmlY) before contributing/reading.
