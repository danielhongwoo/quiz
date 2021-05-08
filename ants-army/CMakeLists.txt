CMAKE_MINIMUM_REQUIRED(VERSION 3.0 FATAL_ERROR)
PROJECT(ants)

SET(EXTERNAL_INSTALL_LOCATION ${CMAKE_SOURCE_DIR}/ext)
SET(CMAKE_CXX_STANDARD 11)

INCLUDE(ExternalProject)
INCLUDE(cmake/gtest.cmake)

INCLUDE_DIRECTORIES(${EXTERNAL_INSTALL_LOCATION}/include)
LINK_DIRECTORIES(${EXTERNAL_INSTALL_LOCATION}/lib)

ADD_EXECUTABLE(
  ants
  main.cpp
  ants.cpp
)

ADD_EXECUTABLE (
  test_ants
  test_ants.cpp
  ants.cpp
)

ADD_DEPENDENCIES(
  test_ants
  googletest
)

TARGET_LINK_LIBRARIES(
  test_ants
  gtest
  gtest_main
  pthread
)
