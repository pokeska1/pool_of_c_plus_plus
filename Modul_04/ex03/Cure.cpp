//
// Created by Jeannetta Marian on 8/24/21.
//

#include "Cure.hpp"

Cure::Cure()
{
}

Cure::Cure(Cure const &cure)
{
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
    return (new Cure);
}

Cure &Cure::operator=(Cure const &cure)
{
    return(*this);
}

