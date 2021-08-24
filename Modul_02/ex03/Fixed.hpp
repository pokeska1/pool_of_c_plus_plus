//
// Created by Jeannetta Marian on 8/21/21.
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
    bool operator!=(Fixed const &same_class);
    bool operator==(Fixed const &same_class);
    bool operator>(Fixed const &same_class) const;
    bool operator<(Fixed const &same_class) const;
    bool operator>=(Fixed const &same_class);
    bool operator<=(Fixed const &same_class);
    Fixed operator+(Fixed const &same_class);
    Fixed operator-(Fixed const &same_class);
    Fixed operator*(Fixed const &same_class);
    Fixed operator/(Fixed const &same_class);
    Fixed &operator=(Fixed const &same_class);
    Fixed &operator++();
    Fixed operator++(int value);
    Fixed &operator--();
    Fixed operator--(int value);

    static const Fixed&max(Fixed const &f, Fixed const &s);
    static Fixed&max(Fixed &f, Fixed &s);
    static const Fixed&min(Fixed const &f, Fixed const &s);
    static  Fixed&min(Fixed  &f, Fixed  &s);
    ~Fixed();
private:
    int number;
    static const int bite = 8;
};

std::ostream &operator<<(std::ostream &out, Fixed const & same_class);


#endif
