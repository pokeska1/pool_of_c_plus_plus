//
// Created by Jeannetta Marian on 8/17/21.
//

#include "Fixed.hpp"

#include <iostream>
int main( void ) {
    Fixed a;
    a.setRawBits(2);
    Fixed b( a );
    Fixed c;
    c = b;
    a.setRawBits(12);
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return (0);
}