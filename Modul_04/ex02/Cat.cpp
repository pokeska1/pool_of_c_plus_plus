//
// Created by Jeannetta Marian on 8/23/21.
//

#include "Cat.hpp"

Cat::Cat()
{
    std::cout<< "Cat constructor" << std::endl;
    this->type = "Cat";
    this->big_brain = new Brain();
}

Cat::~Cat()
{
    delete this->big_brain;
    std::cout<< "Cat destructor" << std::endl;
}

Cat::Cat(const Cat &copy_class)
{
    std::cout<< "Cat copy-constructor" << std::endl;
    if (copy_class.big_brain)
    {
        this->big_brain = new Brain();
        for(int i = 0; i < 100; i++)
            this->big_brain->setIdea(i);
    }
    this->type = copy_class.type;
}

Cat &Cat::operator=(const Cat &copy_class)
{
    std::cout<< "Cat Assignation operator" << std::endl;
    if (this != &copy_class)
    {
        delete this->big_brain;
        this->big_brain = new Brain();
        for(int i = 0; i < 100; i++)
            this->big_brain->setIdea(i);
        this->type = copy_class.type;
    }
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout<< "makeSound ->  (=^・ω・^=) ฅ•ω•ฅ NYA~~~~" << std::endl;
}
