# Rubeus
A 2D game engine written in C++17 using OpenGL 3.3
## Setup
1. Be on Windows
2. Install Microsoft Visual Studio 2017 [here](https://www.visualstudio.com/)
3. Install CMake 3.11.2 [here](https://cmake.org/files/v3.11/cmake-3.11.2.zip)
4. Clone this repository wherever you like:
```shell
git clone https://github.com/sdslabs/Rubeus
```
5. For VS 2017 project files, press `⊞ Win + X` and choose `Command Prompt(Admin)` from the dialog box.
7. Open CMake GUI. Set source code and build destination as the same as the repository directory. Click on Configure. 
8. Select 'Specify options for cross-compiling with CMake'. Specify a platform name and specify the C/C++ compiler directories(gcc.exe and g++.exe preferably).
6. Navigate to the cloned repository. Quick-tips: `X:` command will navigate to the X: drive. `dir` command works the same as the Unix `ls -la` and `cd` still works the same.
9. Run CMake by executing ```cmake ./ ```
10. Open `RubeusCore.sln` in VS and right click on `RubeusCore` and `Set as StartUp project`. [Screenshot](https://imgur.com/a/xadxwsG)
11. Place `glew32.dll` from `/RubeusCore/Dependencies/GLEW/lib/` to `/RubeusCore/Debug`.
12. All `.h` files will be present in `/RubeusCore/Include` and all of their implementations(if any) will be present in `/RubeusCore/Source` as `.cpp` files. No need to edit CMakeLists.txt anywhere unless there are any linking errors popping up.

All libraries are relatively linked thus your project is ready to boot up in Visual Studio. Remember to go through the code conventions [here](https://1drv.ms/f/s!AsFPvDFrZ9iShQpWe_rBZgVLPmlY) before contributing/reading.