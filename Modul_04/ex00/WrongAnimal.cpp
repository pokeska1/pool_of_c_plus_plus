//
// Created by Jeannetta Marian on 8/24/21.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<< "WrongAnimal constructor" << std::endl;
    this->type = "Void";
}

WrongAnimal::~WrongAnimal()
{
    std::cout<< "WrongAnimal destructor " << this->type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy_class)
{
    std::cout<< "WrongAnimal copy-constructor" << std::endl;
    this->type = copy_class.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy_class)
{
    std::cout<< "WrongAnimal Assignation operator" << std::endl;
    this->type = copy_class.type;
    return(*this);
}

std::string WrongAnimal::getType() const
{
    return(type);
}

void WrongAnimal::setType(std::string & type)
{
    std::cout<< "WrongAnimal setter" << std::endl;
    this->type = type;
}

void WrongAnimal::makeSound(void) const
{
    std::cout<< "makeSound ->" << this->type << std::endl;
}