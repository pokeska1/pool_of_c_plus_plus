//
// Created by Jeannetta Marian on 8/21/21.
//
#include "Fixed.hpp"



//конструкторы и диструктор
Fixed::Fixed()
{
    this->number = 0;
}

Fixed::Fixed( const int num_t)
{
    int k;
    int mimic_bite;

    k = 1;
    mimic_bite = this->getRawBits();
    for (int i = 0; i < mimic_bite; i++)
    {
        k *= 2;
    }
    this->number = num_t * k;
}

Fixed::Fixed( const float num_f)
{
    this->number = roundf(num_f * 256);
}

Fixed::Fixed(Fixed const &same_class)
{
    this->number = same_class.number;
    *this = same_class;
}

Fixed::~Fixed()
{

}
// все


//методы

const Fixed& Fixed::max(Fixed const &f, Fixed const &s)
{
    if (f > s)
        return(f);
    else
        return(s);
}

Fixed& Fixed::max(Fixed  &f, Fixed  &s)
{
    if (f > s)
        return(f);
    else
        return(s);
}
const Fixed& Fixed::min(Fixed const &f, Fixed const &s)
{
    if (f < s)
        return(f);
    else
        return(s);
}

Fixed& Fixed::min(Fixed  &f, Fixed  &s)
{
    if (f < s)
        return(f);
    else
        return(s);
}

float Fixed::toFloat( void ) const
{
    int k;
    int mimic_bite;

    k = 1;
    mimic_bite = this->getRawBits();
    for (int i = 0; i < mimic_bite; i++)
    {
        k *= 2;
    }
    return((float)this->number / k);
}

int Fixed::toInt( void ) const
{
    int k;

    int mimic_bite;

    k = 1;
    mimic_bite = this->getRawBits();
    for (int i = 0; i < mimic_bite; i++)
    {
        k *= 2;
    }
    return(this->number / k);
}

int Fixed::getRawBits( void ) const
{
    return (this->bite);
}

void Fixed::setRawBits( int const raw )
{
    this->number = raw;
}


// end



// перегрузка операторов
std::ostream & operator << (std::ostream  &out, Fixed const & same_class)
{
    out << same_class.toFloat();
    return (out);
}

Fixed &Fixed::operator=(Fixed const &same_class)
{
    this->number = same_class.number;
   // setRawBits(same_class.getRawBits());
    return(*this);
}

bool Fixed::operator!=(Fixed const &same_class)
{
    if (number == same_class.number)
        return (false);
    else
        return(true);
}

bool Fixed::operator==(Fixed const &same_class)
{
    if (number == same_class.number)
        return (true);
    else
        return(false);
}

bool  Fixed::operator>(Fixed const &same_class) const
{
    return(this->number > same_class.number);
}

bool Fixed::operator<(Fixed const &same_class) const
{
    return(number < same_class.number);
}

bool Fixed::operator>=(Fixed const &same_class)
{
    return(number >= same_class.number);
}

bool Fixed::operator<=(Fixed const &same_class)
{
    return(number <= same_class.number);
}

Fixed Fixed::operator+(Fixed const &same_class)
{
    Fixed temp;
    temp.number = number + same_class.number;
    return(temp);
}

Fixed Fixed::operator-(Fixed const &same_class)
{
    Fixed temp;
    temp.number = number - same_class.number;
    return(temp);
}

Fixed Fixed::operator*(Fixed const &same_class)
{
    Fixed temp;
    temp.number =(number * same_class.number) / 256;
    return (temp);
}

Fixed Fixed::operator/(Fixed const &same_class)
{
    Fixed temp;
    temp.number = ((float)number / same_class.number) * 256;
    return(temp);
}

Fixed &Fixed::operator++()
{
    this->number += 1;
    return(*this);
}

Fixed Fixed::operator++(int value)
{
    (void)value;
    Fixed temp(*this);

    //this->number += 1;
    ++(*this);
    return(temp);
}

Fixed &Fixed::operator--()
{
    this->number -= 1;
    return(*this);
}

Fixed Fixed::operator--(int value)
{
    (void)value;
    Fixed temp(*this);

    //this->number -= 1;
    --(*this);
    return(temp);
}
// end
