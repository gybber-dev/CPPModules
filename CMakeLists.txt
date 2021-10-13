cmake_minimum_required(VERSION 3.17)
project(CPPModules)

set(CMAKE_CXX_STANDARD 98)

# SET VARIABLES:
# ====================================================
# Adds list of project files
FILE(GLOB CPP_SOURCES
		${CMAKE_CURRENT_SOURCE_DIR}/ex00/*.cpp
		${CMAKE_CURRENT_SOURCE_DIR}/ex00/*.hpp
		${CMAKE_CURRENT_SOURCE_DIR}/ex00/*.h
		)

add_executable(
		CPPModules
		${CPP_SOURCES}
)
# Local targets
#add_executable(
#        builtins
#        ${LOCAL_SOURCES}
#)

target_compile_options(
		CPPModules PRIVATE
		-Wall -Wextra -Werror
)
