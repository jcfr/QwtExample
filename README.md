# OVERVIEW

QwtExample is a simple example illustrating how to build a [Qwt based](http://qwt.sourceforge.net/) application using [CMake](http://www.cmake.org).

## Prerequisites

 * [Qt 4.6.2](http://qt.nokia.com/downloads)
 * [CMake 2.8.2](http://www.cmake.org)
 * [QWT 6.0](http://qwt.sourceforge.net/)

## How to build

    git clone git://github.com/jcfr/QwtExample.git
    mkdir QwtExample-build
    cd QwtExample-build
    cmake -DQT_QMAKE_EXECUTABLE:FILEPATH=/path/to/qmake -DQWT_INCLUDE_DIR:PATH=/path/to/qwt-6.0.1-svn/include/ -DQWT_LIBRARY:FILEPATH=/path/to/qwt-6.0.1-svn/lib/libqwt.so -DQWT_MATHML_LIBRARY:FILEPATH=/path/to/qwt-6.0.1-svn/lib/libqwtmathml.so ../QwtExample
    make -j4
    ctest

## Contribute
Fork + pull.

## TODO

 * Use FindQwt CMake module
