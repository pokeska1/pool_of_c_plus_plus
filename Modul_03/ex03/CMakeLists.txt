cmake_minimum_required(VERSION 3.20)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp ClapTrap.hpp ClapTrap.cpp ScavTrap.cpp ScavTrap.hpp FragTrap.cpp FragTrap.hpp DiamondTrap.cpp DiamondTrap.hpp)
