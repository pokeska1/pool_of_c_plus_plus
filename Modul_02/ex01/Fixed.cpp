//
// Created by Jeannetta Marian on 8/17/21.
//

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int num_t)
{
    this->number = num_t * 256;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float num_f)
{
    this->number = roundf(num_f * 256);
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
    return((float)number / 256);
}

int Fixed::toInt( void ) const
{
    return(number / 256);
}

Fixed &Fixed::operator=(Fixed const &same_class)
{
    std::cout << "Assignation operator called" << std::endl;
    this->number = same_class.number;
    setRawBits(same_class.getRawBits());
    return(*this);
}

std::ostream & operator << (std::ostream  &out, Fixed const & same_class)
{
    out << same_class.toFloat();
    return (out);
}

Fixed::Fixed(Fixed const &same_class)
{
    std::cout << "Copy constructor called" << std::endl;
    this->number = same_class.number;
    *this = same_class;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return (this->number);
}

void Fixed::setRawBits( int const raw )
{
    this->number = raw;
}