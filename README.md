# Rubeus
A 2D game engine written in C++17 using OpenGL 3.3
## Setup
1. Be on Windows
2. Install Microsoft Visual Studio 2017 [Get it here](https://www.visualstudio.com/)
3. Install CMake 3.11.2 [Here](https://cmake.org/files/v3.11/cmake-3.11.2.zip)
4. Clone this repository wherever you like:
```shell
git clone https://github.com/sdslabs/Rubeus
```
1. For VS 2017, press `⊞ Win + X` and choose `Command Prompt(Admin)` from the dialog box.
2. Navigate to the cloned repository. Quick-tips: `X:` will navigate to the X: drive. `dir` works the same as the UNIX `ls -la` and `cd` still works the same.
3. Run CMake 
```shell
	cmake ./
```
8. You will find VS solution files present in the same directory now. Double click to open.
9. All `.h` files are present in `/RubeusCore/Include` and all of their implementations(if any) are present in `/RubeusCore/Source` as `.cpp` files. No need to edit CMakeLists.txt anywhere unless there are any linking errors popping up.

All libraries are relatively linked thus your project is ready to boot up in Visual Studio. Remember to go through the code conventions [Here](https://1drv.ms/f/s!AsFPvDFrZ9iShQpWe_rBZgVLPmlY) before contributing/reading.