//
// Created by Jeannetta Marian on 8/24/21.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout<< "WrongCat constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout<< "WrongCat destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy_class)
{
    std::cout<< "WrongCat copy-constructor" << std::endl;
    this->type = copy_class.type;
}

WrongCat &WrongCat::operator=(const WrongCat &copy_class)
{
    std::cout<< "WrongCat Assignation operator" << std::endl;
    this->type = copy_class.type;
    return(*this);
}

void WrongCat::makeSound(void) const
{
    std::cout<< "makeSound ->  Wrong (=^・ω・^=) ฅ•ω•ฅ NYA~~~~" << std::endl;
}