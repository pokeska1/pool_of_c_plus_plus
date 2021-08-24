//
// Created by Jeannetta Marian on 8/23/21.
//

#ifndef EX00_ANIMAL_HPP
#define EX00_ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &copy_class);
    Animal &operator=(const Animal &copy_class);
    std::string getType() const;
    void setType(std::string & type);
    virtual void makeSound(void) const;
protected:
    std::string type;
};


#endif //EX00_ANIMAL_HPP
