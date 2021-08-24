//
// Created by Jeannetta Marian on 8/23/21.
//

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout<< "Cat constructor" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout<< "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &copy_class)
{
    std::cout<< "Cat copy-constructor" << std::endl;
    this->type = copy_class.type;
}

Cat &Cat::operator=(const Cat &copy_class)
{
    std::cout<< "Cat Assignation operator" << std::endl;
    this->type = copy_class.type;
    return(*this);
}

void Cat::makeSound(void) const
{
    std::cout<< "makeSound ->  (=^・ω・^=) ฅ•ω•ฅ NYA~~~~" << std::endl;
}
