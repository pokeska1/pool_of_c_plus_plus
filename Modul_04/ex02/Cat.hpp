//
// Created by Jeannetta Marian on 8/23/21.
//

#ifndef EX00_CAT_HPP
#define EX00_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    Cat(const Cat &copy_class);
    Cat &operator=(const Cat &copy_class);
    void makeSound(void) const;
private:
    Brain *big_brain;
};


#endif //EX00_CAT_HPP
