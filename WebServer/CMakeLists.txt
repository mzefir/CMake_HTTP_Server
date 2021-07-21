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

# main executable
add_executable (WebServer 
	"WebServer.cpp" 
	"WebServer.h" 

# Networking/Sockets
	"include/Networking/Sockets.hpp"
	"include/Networking/Sockets/AddressFamily.hpp" 
	"include/Networking/Sockets/BindingSocket.hpp" 		"src/Networking/Sockets/BindingSocket.cc"
	"include/Networking/Sockets/ClientSocket.hpp" 		"src/Networking/Sockets/ClientSocket.cc"
	"include/Networking/Sockets/ListeningSocket.hpp" 	"src/Networking/Sockets/ListeningSocket.cc"
	"include/Networking/Sockets/SimpleSocket.hpp" 		"src/Networking/Sockets/SimpleSocket.cc"

# Global includes
	"include/Networking.hpp"
)


if (WIN32)
	target_link_libraries(WebServer ws2_32.lib)
endif()

# Test area (mostly to do)
add_executable (hello_test "hello_test.cc")

target_link_libraries(
  hello_test
  gtest_main
)
include(GoogleTest)
gtest_discover_tests(hello_test)