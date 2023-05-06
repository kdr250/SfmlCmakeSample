cmake_minimum_required(VERSION 3.19)

project(SfmlWithCMake VERSION 1.0)

include(FetchContent)

set(BUILD_SHARED_LIBS OFF)
FetchContent_Declare(
	SFML
	GIT_REPOSITORY https://github.com/SFML/SFML.git
	GIT_TAG 2.5.1
)
FetchContent_MakeAvailable(SFML)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(include)

file(GLOB SOURCES "src/*.cpp" "src/engine/*.cpp")

add_executable(
	SfmlWithCMake
	${SOURCES}
)
target_link_libraries(
	SfmlWithCMake
	sfml-graphics
)
