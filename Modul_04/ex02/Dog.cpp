//
// Created by Jeannetta Marian on 8/23/21.
//

#include "Dog.hpp"

Dog::Dog()
{
    std::cout<< "Dog constructor" << std::endl;
    this->type = "Dog";
    this->small_brain = new Brain();
}

Dog::~Dog()
{
    delete this->small_brain;
    std::cout<< "Dog destructor" << std::endl;
}

Dog::Dog(const Dog &copy_class)
{
    std::cout<< "Dog copy-constructor" << std::endl;

    if (copy_class.small_brain)
    {
        this->small_brain = new Brain();
        for(int i = 0; i < 100; i++)
            this->small_brain->setIdea(i);
    }
    this->type = copy_class.type;
}

Dog &Dog::operator=(const Dog &copy_class)
{
    std::cout<< "Dog Assignation operator" << std::endl;
    if (this != &copy_class)
    {
        delete this->small_brain;
        this->small_brain = new Brain();
        for(int i = 0; i < 100; i++)
            this->small_brain->setIdea(i);
        this->type = copy_class.type;
    }
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout<< "makeSound -> Gav"<< std::endl;
}