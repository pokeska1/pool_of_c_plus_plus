//
// Created by Jeannetta Marian on 8/21/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    Name = "new_name";
    Hitpoints = 100;
    Energy_points = 100;
    Attack_damage = 30;
}


FragTrap::FragTrap(std::string const &new_name) : ClapTrap(new_name)
{
    Name = new_name;
    Hitpoints = 100;
    Energy_points = 100;
    Attack_damage = 30;
    std::cout << Name << "- I'm born'" << std::endl;
}


FragTrap::FragTrap(const FragTrap &what)
{
    this->Name = what.Name;
    this->Hitpoints = what.Hitpoints;
    this->Energy_points = what.Energy_points;
    this->Attack_damage = what.Attack_damage;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high Fives Guys!!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << Name << "- I need more Frags!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &f)
{
    this->Name = f.Name;
    this->Hitpoints = f.Hitpoints;
    this->Attack_damage = f.Attack_damage;
    this->Energy_points = f.Energy_points;
    return(*this);
}
