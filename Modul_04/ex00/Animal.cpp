//
// Created by Jeannetta Marian on 8/23/21.
//

#include "Animal.hpp"

Animal::Animal()
{
    std::cout<< "Animal constructor" << std::endl;
    this->type = "Void";
}

Animal::~Animal()
{
    std::cout<< "Animal destructor " << this->type << std::endl;
}

Animal::Animal(const Animal &copy_class)
{
    std::cout<< "Animal copy-constructor" << std::endl;
    this->type = copy_class.type;
}

Animal &Animal::operator=(const Animal &copy_class)
{
    std::cout<< "Animal Assignation operator" << std::endl;
    this->type = copy_class.type;
    return(*this);
}

std::string Animal::getType() const
{
    return(type);
}

void Animal::setType(std::string & type)
{
    std::cout<< "Animal setter" << std::endl;
    this->type = type;
}

void Animal::makeSound(void) const
{
    std::cout<< "makeSound ->" << this->type << std::endl;
}