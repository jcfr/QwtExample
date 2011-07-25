cmake_minimum_required(VERSION 2.8)

project(QwtExample)

find_package(Qt4)
include(${QT_USE_FILE})

# Qwt include directory
set(QWT_INCLUDE_DIR CACHE PATH "Qwt include directory")
if(NOT QWT_INCLUDE_DIR)
  message(FATAL_ERROR "QWT_INCLUDE_DIR should be set to a path like '/home/jchris/Projects/qwt-6.0.1-svn/include'")
endif()
include_directories(${QWT_INCLUDE_DIR})

# Qwt libraries
set(QWT_LIBRARY CACHE FILEPATH "Qwt library")
if(NOT QWT_LIBRARY)
  message(FATAL_ERROR "QWT_LIBRARY should be set to a filepath like '/home/jchris/Projects/qwt-6.0.1-svn/lib/libqwt.so'")
endif()
set(QWT_MATHML_LIBRARY CACHE FILEPATH "Qwt library")
if(NOT QWT_MATHML_LIBRARY)
  message(FATAL_ERROR "QWT_MATHML_LIBRARY should be set to a filepath like '/home/jchris/Projects/qwt-6.0.1-svn/lib/libqwtmathml.so'")
endif()
set(qwt_libraries ${QWT_LIBRARY} ${QWT_MATHML_LIBRARY})

set(SRCS main.cpp)

add_executable(qwtexample ${SRCS})
target_link_libraries(qwtexample ${QT_LIBRARIES} ${qwt_libraries})

