<p>
<h1 align=center><strong>Setting up Rubeus on Linux</strong></h1>
<p/>

<p align=center>
Created by SDSLabs with :heart:
</p>

## Setting up the build environment 
1. You can use any IDE/text-editor you fancy for contributing to Rubeus.
2. Rubeus uses Visual Leak Detector v2.5.1 for catching memory leaks. Unfortunately, it is not available for Linux, which means that you may have to use some other dynamic code profiling tool like [Valgrind](http://valgrind.org/).
3. Install [CMake](https://cmake.org/) (preferably a version above or same as 3.11).
4. Clone this repository:
```shell
$ git clone https://github.com/sdslabs/Rubeus
```

## Acquiring system dependent dependencies:
1. The system package manager on Ubuntu can be commanded to get system specific libraries to run Rubeus. Run:
```shell
$ sudo apt install mesa-common-dev libxinerama-dev libxcursor-dev mesa-vulkan-drivers vulkan-utils cmake-gui
$ sudo apt-get install libgl-dev xorg-dev libglu1-mesa-dev libx11-dev libxrandr-dev libxi-dev libudev-dev mesa-common-dev 
$ hash -r
```

## Building required dependencies
1. Install [Vcpkg](https://github.com/Microsoft/vcpkg), a cross-platform C++ package manager and place it in a suitable directory. Follow basic installation commands provided in the vcpkg readme. Make sure you have a version above or same as 0.0.113.
2. Update vcpkg first:
```shell
$ path/to/vcpkg/vcpkg update
```
3. Install GLEW, OpenGL Extension Wrangler library (preferably glew:x64-linux) by running:
```shell
$ path/to/vcpkg/vcpkg install glew
```
4. Install GLFW, OpenGL Graphics Framework (preferably glfw3:x64-linux) by running:
```shell
$ path/to/vcpkg/vcpkg install glfw3
```
5. Install DevIL, Developer Image Library (preferably devil:x64-linux) by running:
```shell
$ path/to/vcpkg/vcpkg install devil
```
6. Install Boost.Any, Boost::Any C++ utility library(boost-any:x64-linux) by running:
```shell
$ path/to/vcpkg/vcpkg install boost-any
```
7. Install SFML, Simple & Fast Media Library (sfml:x64-linux) by running:
```shell
$ path/to/vcpkg/vcpkg install sfml
```
8. SFML requires some external libraries acquired by the system package manager. Vcpkg shall remind you before building SFML to install these libraries using `apt-get`.

## Initialising CMake with vcpkg
1. Open Terminal(Default: Ctrl+Alt+T). Open CMake GUI:
```shell
$ cmake-gui
```
2.  Select `Unix Makefiles` from the drop down menu and set source code and build destination as the same as the repository directory. Click on Configure.
3. Select 'Specify options for cross-compiling with CMake'. Specify the platform name (i.e. Linux) and specify the C and C++ compilers (`gcc` and `g++` preferably).
4. Click on `Configure`.
5. Navigate to the cloned repository.
6. To use libraries acquired by vcpkg, run:
```shell
$ path/to/vcpkg/vcpkg integrate install
```
7. Instruct CMake to acquire libraries already built by vcpkg, by running:
```shell
$ cmake -DCMAKE_TOOLCHAIN_FILE=path/to/vcpkg/scripts/buildsystems/vcpkg.cmake ./
```
8. Run CMake by executing
```shell
$ cmake ./
```

## Setting up Rubeus source in your IDE/text-editor
1. Open the Rubeus root directory in your IDE/text-editor.
2. All `.h` files will be present in `/RubeusCore/Include` and all of their implementations(if any) will be present in `/RubeusCore/Source` as `.cpp` files. No need to edit CMakeLists.txt anywhere unless there are any linking errors popping up.
3. Use any CMake extensions available for your environment to ease building the project using CMake.
4. Add `/RubeusCore/Include` as your include directory, if it's not already.

## Building Rubeus using Makefiles
1. After running `cmake ./` in the Rubeus root directory you will find that CMake has generated a Makefile. To use this Makefile to build Rubeus, just run:
```shell
$ make
```
2. This will generate a binary in the `RubeusCore/` directory by the name `RubeusCore`. Run Rubeus using:
```shell
$ cd RubeusCore/
$ ./RubeusCore
```
Remember to go through the [contribution guidelines](CONTRIBUTING.md) for further guidance.
