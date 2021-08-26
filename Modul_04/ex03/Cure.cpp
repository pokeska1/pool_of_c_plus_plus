//
// Created by Jeannetta Marian on 8/24/21.
//

#include "Cure.hpp"

Cure::Cure() : AMateria()
{
    type = "cure";
}

Cure::Cure(Cure const &cure) : AMateria()
{
    type = cure.type;
}

Cure::~Cure(){}

AMateria* Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<" wounds *" << std::endl;
}

void Cure::setType(std::string const &type)
{
    this->type = type;
}


Cure &Cure::operator=(Cure const &cure)
{
    type = cure.type;
    return(*this);
}

