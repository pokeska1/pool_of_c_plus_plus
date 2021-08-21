//
// Created by Jeannetta Marian on 8/17/21.
//

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is\t" << a << std::endl;
    std::cout << "b is\t" << b << std::endl;
    std::cout << "c is\t" << c << std::endl;
    std::cout << "d is\t" << d << std::endl;
    std::cout << "a is\t" << a.toInt() << "\t\tas integer" << std::endl;
    std::cout << "b is\t" << b.toInt() << "\t\tas integer" << std::endl;
    std::cout << "c is\t" << c.toInt() << "\t\tas integer" << std::endl;
    std::cout << "d is\t" << d.toInt() << "\t\tas integer" << std::endl;
    std::cout << "a is\t" << a.toFloat() << "\t\tas Float" << std::endl;
    std::cout << "b is\t" << b.toFloat() << "\t\tas Float" << std::endl;
    std::cout << "c is\t" << c.toFloat() << "\t\tas Float" << std::endl;
    std::cout << "d is\t" << d.toFloat() << "\t\tas Float" << std::endl;
    return 0;
}