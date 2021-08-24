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
}

ClapTrap::ClapTrap(std::string new_name)
{
    Name = new_name;
    Hitpoints = 10;
    Energy_points = 10;
    Attack_damage = 0;
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
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy_class)
{
	this->Name = copy_class.Name;
    this->Hitpoints = copy_class.Hitpoints;
    this->Energy_points = copy_class.Energy_points;
    this->Attack_damage = copy_class.Attack_damage;
	return(*this);
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << Name << " attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "Receives damage by " << amount << " points of damage!"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "Heals " << amount << " Hitpoints " << std::endl;
}
