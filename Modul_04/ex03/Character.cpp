//
// Created by Jeannetta Marian on 8/24/21.
//

#include "Character.hpp"

Character::Character() : ICharacter
{
    name = "Void";
}

Character(std::string const &name) : ICharacter
{
    this->name = name;
    bag = new AMateria[4];
}

Character::Character(Character const &charc) : ICharacter
{
    this->name = charc.name;
}

Character::~Character()
{
    this->delete;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (bag[i] == NULL)
        {
            bag[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    bag[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    std::cout << bag[idx] << " in " << target << std::endl;
}

std::string const & Character::getName() const
{
    return(this->name);
}
Character &Character::operator=(Character const & charc)
{

}
