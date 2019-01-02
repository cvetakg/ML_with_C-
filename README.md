# Machine Learning and Computer Vision with C++

### OpenCV Installation in Linux - Building OpenCV from Source

https://docs.opencv.org/3.2.0/d7/d9f/tutorial_linux_install.html


### Running tests


1. Get the required test data from OpenCV extra repository.

```
git clone https://github.com/opencv/opencv_extra.git
```

2. Set OPENCV_TEST_DATA_PATH environment variable to <path to opencv_extra/testdata>

```
export OPENCV_TEST_DATA_PATH=/home/jelena/opencv_extra/testdata
```
    
3. Execute tests from build directory. For example:

```
<cmake_build_dir>/bin/opencv_test_core

or

~/opencv/build/bin$ ./opencv_version 
4.0.1-dev
```

### Compile and run C++ from the command line

```
sudo g++ program.cpp -o program
./program
```

### Compile and run OpenCV in C++ from the command line

https://docs.opencv.org/3.2.0/db/df5/tutorial_linux_gcc_cmake.html

```
mkdir build
cd build
cmake ..
make
./DisplayImage ../images/1.png
```

### Example of CMakeLists.txt

```
cmake_minimum_required(VERSION 2.8)
project(DisplayImage)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(OpenCV_INCLUDE_DIRS "/home/jelena/opencv/include")
set(OpenCV_LIBS "/home/jelena/opencv/build/lib")

set(SOURCE_FILES main.cpp)

# Find OpenCV, you may need to set OpenCV_DIR variable
# to the absolute path to the directory containing OpenCVConfig.cmake file
# via the command line or GUI
find_package(OpenCV REQUIRED)

# If the package has been found, several variables will
# be set, you can find the full list with descriptions
# in the OpenCVConfig.cmake file.
# Print some message showing some of them
message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

# Add OpenCV headers location to your include paths
include_directories(${OpenCV_INCLUDE_DIRS})

# Declare the executable target built from your sources
add_executable(DisplayImage DisplayImage.cpp)

# Link your application with OpenCV libraries
target_link_libraries(DisplayImage ${OpenCV_LIBS})
```
