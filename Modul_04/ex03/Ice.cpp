//
// Created by Jeannetta Marian on 8/24/21.
//

#include "Ice.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::Ice(Ice const &ice)
{
    type = ice.getType();
}

Ice::~Ice(){}

AMateria* Ice::clone() const
{
    return (new Ice);
}

void Ice::setType(std::string const &type)
{
    this->type = type;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<" wounds *" << std::endl;
}

Ice &Ice::operator=(Ice const &ice)
{
    type = ice.getType();
    return(*this);
}
