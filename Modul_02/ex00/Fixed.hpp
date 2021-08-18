//
// Created by Jeannetta Marian on 8/17/21.
//
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
public:
    Fixed();
    Fixed(Fixed const &same_class);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed & operator = (const Fixed &same_class);

private:
    int number;
    static const int bite = 8;
};

#endif
