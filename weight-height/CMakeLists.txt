CMAKE_MINIMUM_REQUIRED(VERSION 3.0 FATAL_ERROR)
PROJECT(big_guy)

SET(EXTERNAL_INSTALL_LOCATION ${CMAKE_SOURCE_DIR}/ext)
SET(CMAKE_CXX_STANDARD 11)

INCLUDE(ExternalProject)
INCLUDE(cmake/gtest.cmake)

#ExternalProject_Add(googletest
#    GIT_REPOSITORY https://github.com/google/googletest
#    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${EXTERNAL_INSTALL_LOCATION}
#)

#LINK_DIRECTORIES(${AIDMAT_ROOT}/ext/${TARGET}/lib/)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -Werror")

INCLUDE_DIRECTORIES(${EXTERNAL_INSTALL_LOCATION}/include)
LINK_DIRECTORIES(${EXTERNAL_INSTALL_LOCATION}/lib)

#LINK_LIBRARIES(
#  gtest
#)

ADD_EXECUTABLE(
  big_guy
  main.cpp
  big_guy.cpp
)

ADD_EXECUTABLE (
  test_big_guy
  test_big_guy.cpp
  big_guy.cpp
)

ADD_DEPENDENCIES(
  test_big_guy
  googletest
)

TARGET_LINK_LIBRARIES(
  test_big_guy
  gtest
  gtest_main
  pthread
)
