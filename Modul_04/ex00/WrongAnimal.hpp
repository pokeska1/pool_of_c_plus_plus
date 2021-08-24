//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX00_WRONGANIMAL_HPP
#define EX00_WRONGANIMAL_HPP


#include <iostream>
#include <string>

class WrongAnimal {
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal &copy_class);
    WrongAnimal &operator=(const WrongAnimal &copy_class);
    std::string getType() const;
    void setType(std::string & type);
    void makeSound(void) const;
protected:
    std::string type;
};

#endif //EX00_WRONGANIMAL_HPP
