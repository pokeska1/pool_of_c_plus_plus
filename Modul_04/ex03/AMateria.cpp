//
// Created by Jeannetta Marian on 8/24/21.
//

#include "AMateria.hpp"

AMateria::AMateria()
{
    type = "void";
}

AMateria::AMateria(AMateria const &amat)
{
    type = amat.type;
}

AMateria::~AMateria(){}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "i can't use anything on " << target.getName() << std::endl;
}

std::string const & AMateria::getType() const
{
    return(this->type);
}