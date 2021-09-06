cmake_minimum_required(VERSION 3.20)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex00 main.cpp Integer.cpp Integer.hpp Needed.cpp Needed.hpp Char_sing.cpp Char_sing.hpp
        Float_num.cpp Float_num.hpp Double_num.cpp Double_num.hpp)
