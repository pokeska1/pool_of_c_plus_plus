//
// Created by Jeannetta Marian on 8/17/21.
//

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
    Fixed a;
    Fixed c;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
  //  std::cout << Fixed::max( a, b ) << std::endl;

//    std::cout << ++a << std::endl;
//    std::cout << ++a << std::endl;
//    if (a == c)
//        std::cout << "a == c" << std::endl;
//
//    if (a != b)
//        std::cout << "a != b" << std::endl;
    return 0;
}