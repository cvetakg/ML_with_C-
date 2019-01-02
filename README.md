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

### OpenCV from the command line

https://docs.opencv.org/3.2.0/db/df5/tutorial_linux_gcc_cmake.html

```
mkdir build
cd build
cmake ..
make
./DisplayImage ../images/1.png
```
