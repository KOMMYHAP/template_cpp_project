cmake_minimum_required(VERSION 3.15.0 FATAL_ERROR)

project("Template Project" LANGUAGES CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std:c++17")

set(PROJECT_OUTPUT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/bin" CACHE STRING "Project directory")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG "${PROJECT_OUTPUT_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE "${PROJECT_OUTPUT_DIR}")

if (WIN32)
	add_compile_options(/W4 /std:c++17 $<$<CONFIG:Release>:/GL>)
	add_link_options($<$<CONFIG:Release>:/LTCG:INCREMENTAL>)
endif()

add_subdirectory(src)

# Startup project
if (MSVC)
	set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT PacketQueue)
endif()
