//
// Created by Jeannetta Marian on 8/21/21.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    Name = "new_name";
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "I am your boss " << Name <<" You will be my minien!" << std::endl;

}

ClapTrap::ClapTrap(std::string new_name)
{
    Name = new_name;
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout << "I am your boss " << Name <<" You will be my minien!" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &what)
{
    this->Name = what.Name;
    this->Hitpoints = what.Hitpoints;
    this->Energy_points = what.Energy_points;
    this->Attack_damage = what.Attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout << Name << "- i'm dying minions!" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << Name << " attack " << target << " by " << Attack_damage<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "causing " << amount << " points of damage!"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Heals " << amount << " Hitpoints " << std::endl;
}

std::string &ClapTrap::getName()
{
    return(Name);
}

void ClapTrap::setName(std::string &name)
{
    Name = name;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &f)
{
    this->Name = f.Name;
    this->Hitpoints = f.Hitpoints;
    this->Attack_damage = f.Attack_damage;
    this->Energy_points = f.Energy_points;
    return(*this);
}
