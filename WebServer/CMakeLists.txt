# CMakeList.txt : CMake project for WebServer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/master.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include_directories(
	"include"
)

# Add source to this project's executable.
add_executable (WebServer 
	"WebServer.cpp" 
	"WebServer.h" 
	"include/Networking/SimpleSocket.hpp"
	"src/Networking/SimpleSocket.cc"
	)



# Test area
add_executable (hello_test "hello_test.cc")

target_link_libraries(
  hello_test
  gtest_main
)
include(GoogleTest)
gtest_discover_tests(hello_test)


# TODO: Add tests and install targets if needed.
