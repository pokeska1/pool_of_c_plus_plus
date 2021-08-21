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
    static const int&max(Fixed const &f, Fixed const &s)
    {
        if (f.number > s.number)
            return(f.number);
        else
            return(s.number);
    }
    static const int&min(Fixed const &f, Fixed const &s)
    {
        if (f.number < s.number)
            return(f.number);
        else
            return(s.number);
    }
    float toFloat( void ) const;
    int toInt( void ) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    bool operator!=(Fixed const &same_class);
    bool operator==(Fixed const &same_class);
    bool operator>(Fixed const &same_class);
    bool operator<(Fixed const &same_class);
    bool operator>=(Fixed const &same_class);
    bool operator<=(Fixed const &same_class);
    Fixed operator+(Fixed const &same_class);
    Fixed operator-(Fixed const &same_class);
    Fixed &operator*(Fixed const &same_class);
    Fixed operator/(Fixed const &same_class);
    Fixed &operator=(Fixed const &same_class);
    Fixed &operator++();
    Fixed &operator++(int value);
    Fixed &operator--();
    Fixed &operator--(int value);

    ~Fixed();
private:
    int number;
    static const int bite;
};

std::ostream &operator<<(std::ostream &out, Fixed const & same_class);


#endif
