//
// Created by Jeannetta Marian on 8/17/21.
//

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->number = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed & operator = (const Fixed &same_class)
{
    this->number = same_class.number;
    setRawBits(same_class.getRawBits());
    return(*this);
}

Fixed::Fixed(Fixed const &same_class)
{
    std::cout << "Copy constructor called" << std::endl;
    this->number = same_class.number;
    this->setRawBits(same_class.getRawBits());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->number);
}

void Fixed::setRawBits( int const raw )
{
    this->number = raw;
}