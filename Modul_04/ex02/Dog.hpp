//
// Created by Jeannetta Marian on 8/23/21.
//

#ifndef EX00_DOG_HPP
#define EX00_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    ~Dog();
    Dog(const Dog &copy_class);
    Dog &operator=(const Dog &copy_class);
    void makeSound(void) const;
private:
    Brain *small_brain;
};


#endif //EX00_DOG_HPP
