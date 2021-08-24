//
// Created by Jeannetta Marian on 8/23/21.
//

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout<< "Dog constructor" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout<< "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &copy_class)
{
    std::cout<< "Dog copy-constructor" << std::endl;
    this->type = copy_class.type;
}

Dog &Dog::operator=(const Dog &copy_class)
{
    std::cout<< "Dog Assignation operator" << std::endl;
    this->type = copy_class.type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout<< "makeSound -> Gav"<< std::endl;
}