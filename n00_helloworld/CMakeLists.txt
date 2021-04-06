#Author : beautifularea
#Date   : 28/3/2021
#Desc   : cmake with boost 

SET(PROJECTNAME example)
PROJECT(${PROJECTNAME})
CMAKE_MINIMUM_REQUIRED(VERSION 3.10.2)

set(boost_root "/root/debug_boost/boost_1_65_0")
INCLUDE_DIRECTORIES("${boost_root}/include")
LINK_DIRECTORIES("${boost_root}/stage/lib")

AUX_SOURCE_DIRECTORY(./ DIR_MAIN_SRCS)
ADD_EXECUTABLE(${PROJECTNAME} ${DIR_MAIN_SRCS})

FIND_PACKAGE(Boost 1.65.0 COMPONENTS thread date_time filesystem system log log_setup REQUIRED)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")

TARGET_LINK_LIBRARIES(${PROJECTNAME} libboost_log_setup.a)
TARGET_LINK_LIBRARIES(${PROJECTNAME} libboost_log.a)
TARGET_LINK_LIBRARIES(${PROJECTNAME} libboost_system.a)
TARGET_LINK_LIBRARIES(${PROJECTNAME} libboost_date_time.a)
TARGET_LINK_LIBRARIES(${PROJECTNAME} libboost_filesystem.a)
TARGET_LINK_LIBRARIES(${PROJECTNAME} libboost_thread.a)
TARGET_LINK_LIBRARIES(${PROJECTNAME} -lpthread)
TARGET_LINK_LIBRARIES(${PROJECTNAME} /root/debug_boost/opencl/OpenCL-SDK/build/libOpenCL.so)

