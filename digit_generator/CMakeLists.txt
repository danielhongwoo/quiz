CMAKE_MINIMUM_REQUIRED(VERSION 3.0 FATAL_ERROR)
PROJECT(digit_generator)

SET(EXTERNAL_INSTALL_LOCATION ${CMAKE_SOURCE_DIR}/ext)
SET(CMAKE_CXX_STANDARD 11)

INCLUDE(ExternalProject)
INCLUDE(cmake/gtest.cmake)

#ExternalProject_Add(googletest
#    GIT_REPOSITORY https://github.com/google/googletest
#    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}
#)

#LINK_DIRECTORIES(${AIDMAT_ROOT}/ext/${TARGET}/lib/)

INCLUDE_DIRECTORIES(${EXTERNAL_INSTALL_LOCATION}/include)
LINK_DIRECTORIES(${EXTERNAL_INSTALL_LOCATION}/lib)

#LINK_LIBRARIES(
#  gtest
#)

ADD_EXECUTABLE(
  generator
  main.cpp
  generator.cpp
)

ADD_EXECUTABLE (
  test_generator
  test_generator.cpp
  generator.cpp
)

ADD_DEPENDENCIES(
  test_generator
  googletest
)

TARGET_LINK_LIBRARIES(
  test_generator
  gtest
  gtest_main
  pthread
)
