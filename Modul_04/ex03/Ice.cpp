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
    type = ice.type;
}

Ice::~Ice(){}

AMateria* Ice::clone() const
{
    return (new Ice);
}

void use(ICharacter& target)
{
    std::cout << "* heals "<< target.getName() <<" wounds *" << std::endl;
}

Ice &Ice::operator=(Ice const &cure)
{
    type = ice.type;
    return(*this);
}
