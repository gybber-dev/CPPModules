cmake_minimum_required(VERSION 3.17)
project(CPPModules)

set(CMAKE_CXX_STANDARD 98)

# SET VARIABLES:
# ====================================================
# Adds list of project files
FILE(GLOB CPP_SOURCES
        Module01/ex03/*.cpp
        Module01/ex03/*.hpp
        Module01/ex03/*.h
		)

add_executable(
		CPPModules
		${CPP_SOURCES} Module01/ex03/main.cpp Module01/ex03/Weapon.cpp Module01/ex03/Weapon.hpp Module01/ex03/HumanA.cpp Module01/ex03/HumanB.cpp Module01/ex03/HumanA.hpp Module01/ex03/HumanB.hpp)
# Local targets
#add_executable(
#        builtins
#        ${LOCAL_SOURCES}
#)

target_compile_options(
		CPPModules PRIVATE
		-Wall -Wextra -Werror
)
