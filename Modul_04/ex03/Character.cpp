//
// Created by Jeannetta Marian on 8/24/21.
//

#include "Character.hpp"

Character::Character()
{
    name = "Void";
    bag = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        bag[i] = NULL;
}

Character::Character(std::string const &name)
{
    this->name = name;
    bag = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        bag[i] = NULL;
}

Character::Character(Character const &charc)
{
    this->name = charc.name;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        delete this->bag[i];
    delete[] this->bag;
}

void Character::equip(AMateria* m)
{
    bool meh = false;
    for (int i = 0; i < 4; i++)
    {
        if (bag[i] == NULL)
        {
            bag[i] = m;
            meh = true;
            break;
        }
    }
    if (meh == false)
        std::cout << "You're trying to bite off too big a piece of the pie" << std::endl;
}

void Character::unequip(int idx)
{
    bag[idx]->setType("NULL");
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && bag[idx] != NULL && bag[idx]->getType() != "NULL")
        std::cout << bag[idx]->getType() << " in " << target.getName() << std::endl;
    else if (idx >= 4)
    {
        std::cout << "there are only 4 pockets in this bag" << std::endl;
    }
    else
    {
        std::cout << "This bag pocket is empty," << " what i mast to do with " << target.getName() << " ?" << std::endl;
    }
}

std::string const & Character::getName() const
{
    return(this->name);
}

Character &Character::operator=(Character const & charc)
{
    this->name = charc.name;
    for (int i = 0; i < 4; i++)
        delete this->bag[i];
    delete[] this->bag;
    bag = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        bag[i] = NULL;
    return(*this);
}
