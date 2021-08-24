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

AMateria::AMateria* clone() const
{
    return(new AMateria);
}

void AMateria::use(ICharacter& target)
{
    std::string << "i can't use anything on " << target << std::endl;
}

std::string const & AMateria::getType() const
{
    return(this->type);
}

AMateria &AMateria::operator=(AMateria const &amat)
{
    type = amat.type;
    return(*this);
}