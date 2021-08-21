//
// Created by Jeannetta Marian on 8/17/21.
//
#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
public:
    Fixed();
    Fixed( const int num_i);
    Fixed( const float num_f);
    Fixed(Fixed const &same_class);
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator=(Fixed const &same_class);
    ~Fixed();
private:
    int number;
    static const int bite = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const & same_class);


#endif
