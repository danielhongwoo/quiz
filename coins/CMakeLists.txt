CMAKE_MINIMUM_REQUIRED(VERSION 3.0 FATAL_ERROR)
PROJECT(coins)

SET(EXTERNAL_INSTALL_LOCATION ${CMAKE_SOURCE_DIR}/ext)
SET(CMAKE_CXX_STANDARD 11)

INCLUDE(ExternalProject)
INCLUDE(cmake/gtest.cmake)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Werror")

INCLUDE_DIRECTORIES(${EXTERNAL_INSTALL_LOCATION}/include)
LINK_DIRECTORIES(${EXTERNAL_INSTALL_LOCATION}/lib)

ADD_EXECUTABLE(
  coins
  main.cpp
  coins.cpp
)

ADD_EXECUTABLE (
  test_coins
  test_coins.cpp
  coins.cpp
)

ADD_DEPENDENCIES(
  test_coins
  googletest
)

TARGET_LINK_LIBRARIES(
  test_coins
  gtest
  gtest_main
  pthread
)
