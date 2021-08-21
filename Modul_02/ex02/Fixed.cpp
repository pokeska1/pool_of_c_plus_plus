//
// Created by Jeannetta Marian on 8/17/21.
//

#include "Fixed.hpp"

//конструкторы и диструктор
Fixed::Fixed()
{
    this->number = 0;
    setRawBits(8);
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
   // delete this;
    //std::cout << "Destructor called" << std::endl;
}
// все


//методы
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
    return (this->number);
}

void Fixed::setRawBits( int const raw )
{
    this->number = raw;
}


// end



// перегрузка операторов
std::ostream & operator << (std::ostream  &out, Fixed const & same_class)
{
    out << same_class.toInt();
    return (out);
}

Fixed &Fixed::operator=(Fixed const &same_class)
{
    this->number = same_class.number;
    setRawBits(same_class.getRawBits());
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

bool Fixed::operator>(Fixed const &same_class)
{
    return(number > same_class.number);
}

bool Fixed::operator<(Fixed const &same_class)
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

Fixed &Fixed::operator*(Fixed const &same_class)
{
    Fixed *temp = new Fixed;
    temp->number = number * same_class.number;
    return (*temp);
}

Fixed Fixed::operator/(Fixed const &same_class)
{
    Fixed temp;
    temp.number = number / same_class.number;
    return(temp);
}

Fixed &Fixed::operator++()
{
    int k;
    int mimic_bite;

    k = 1;
    mimic_bite = this->getRawBits();
    for (int i = 0; i < mimic_bite; i++)
        k *= 2;
    k += (0.00390625 * k);
    for (int i = 0; i < mimic_bite; i++)
        k /= 2;
    setRawBits(k);
    return(*this);
}

Fixed &Fixed::operator++(int value)
{
    (void)value;
    Fixed temp(*this);
    int k;
    int mimic_bite;

    k = 1;
    mimic_bite = this->getRawBits();
    for (int i = 0; i < mimic_bite; i++)
        k *= 2;
    k += (0.00390625 * k);
    for (int i = 0; i < mimic_bite; i++)
        k /= 2;
    setRawBits(k);
    return(*this);
}

Fixed &Fixed::operator--()
{
    int k;
    int mimic_bite;

    k = 1;
    mimic_bite = this->getRawBits();
    for (int i = 0; i < mimic_bite; i++)
        k *= 2;
    k -= (0.00390625 * k);
    for (int i = 0; i < mimic_bite; i++)
        k /= 2;
    setRawBits(k);
    return(*this);
}

Fixed &Fixed::operator--(int value)
{
    (void)value;
    Fixed temp(*this);
    int k;
    int mimic_bite;

    k = 1;
    mimic_bite = this->getRawBits();
    for (int i = 0; i < mimic_bite; i++)
        k *= 2;
    k -= (0.00390625 * k);
    for (int i = 0; i < mimic_bite; i++)
        k /= 2;
    setRawBits(k);
    return(*this);
}
// end


