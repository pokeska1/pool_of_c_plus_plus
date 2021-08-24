//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX00_WRONGCAT_HPP
#define EX00_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &copy_class);
    WrongCat &operator=(const WrongCat &copy_class);
    void makeSound(void) const;
};


#endif //EX00_WRONGCAT_HPP
