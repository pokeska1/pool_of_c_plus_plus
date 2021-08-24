//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
    Character();
    Character(std::string const &name);
    Character(Character const & charc);
    ~Character();

    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

    std::string const & getName() const;
    Character &operator=(Character const & charc);
protected:
    std::string name;
    AMateria** bag;
};


#endif //EX03_CHARACTER_HPP
