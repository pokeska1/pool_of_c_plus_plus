//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
    void unequip(void);
    void (, ICharacter&);


    ~Character() {}
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, Character& target);
};


#endif //EX03_CHARACTER_HPP
