z# Rubeus
A 2D game engine written in C++17 using OpenGL 3.3
## Setup
1. Be on Windows
2. Install Microsoft Visual Studio 2017 [here](https://www.visualstudio.com/)
3. Install CMake 3.11.2 [here](https://cmake.org/files/v3.11/cmake-3.11.2.zip)
4. Rubeus uses Visual Leak Detector v2.5.1 for catching memory leaks. Get it [here](https://github.com/KindDragon/vld/releases/tag/v2.5.1). However, if you wish to not use this tool, just remove `add_definitions(-DVLD)` from /RubeusCore/CMakeLists.txt.
5. Clone this repository wherever you like:
```shell
git clone https://github.com/sdslabs/Rubeus
```
6. Install Boost 1.67.0 libraries from [here](https://akamai.bintray.com/1c/1cd94f03a71334a67d36f5161b57f5931e0cd6ecf726d7aca8bd82a3be720b74?__gda__=exp=1530959589~hmac=78630dc5f1680ea67c190b7e2882f73ef52ba520f8eac5ce8e0d86f8343f0a6f&response-content-disposition=attachment%3Bfilename%3D%22boost_1_67_0.7z%22&response-content-type=application%2Fx-7z-compressed&requestInfo=U2FsdGVkX19hGyPOUZz7d-d_-ghBTzP_HWHk2OYJsVUK4CS1GRa67vdxllX8vvuZiO7A5lGHLH2wYrJU3o-78G0t3WhxxnLMP-xyU1azsXrNNsyX-0WBONnVHyti5sBJqnDC3bKOZ3ZF6Mw9eFkU6Af0MVuV8D64QcFWsPnanRg&response-X-Checksum-Sha1=64c278c23defe155e630a307ae2c0615348b14b3&response-X-Checksum-Sha2=1cd94f03a71334a67d36f5161b57f5931e0cd6ecf726d7aca8bd82a3be720b74). Place the `boost` folder in the archive to the `RubeusCore/Dependencies/Boost_libraries/`. No need to build any of the Boost libraries.
7. For VS 2017 project files, press `⊞ Win + X` and choose `Command Prompt(Admin)` from the dialog box.
8. Open CMake GUI. Set source code and build destination as the same as the repository directory. Click on Configure.
9. Select 'Specify options for cross-compiling with CMake'. Specify a platform name and specify the C/C++ compiler directories(gcc.exe and g++.exe preferably).
10. Navigate to the cloned repository. Quick-tips: `X:` command will navigate to the X: drive. `dir` command works the same as the Unix `ls -la` and `cd` still works the same.
11. Run CMake by executing ```cmake ./ ```
12. Open `RubeusCore.sln` in VS and right click on `RubeusCore` and `Set as StartUp project`. [Screenshot](https://imgur.com/a/xadxwsG)
13. Place all `.dll` files from `/RubeusCore/Dependencies/` to `/RubeusCore/Debug/` and `/RubeusCore/Release`.
14. All `.h` files will be present in `/RubeusCore/Include` and all of their implementations(if any) will be present in `/RubeusCore/Source` as `.cpp` files. No need to edit CMakeLists.txt anywhere unless there are any linking errors popping up.

All libraries are relatively linked thus your project is ready to boot up in Visual Studio. Remember to go through the code conventions [here](https://1drv.ms/f/s!AsFPvDFrZ9iShQpWe_rBZgVLPmlY) before contributing/reading.
