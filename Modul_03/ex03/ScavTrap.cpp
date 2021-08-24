//
// Created by Jeannetta Marian on 8/21/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()  : ClapTrap()
{
    std::cout << "name" << " waiting for your instructions!" << std::endl;
    this->Name = "name";
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this-> Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
    std::cout << name << " waiting for your instructions!" << std::endl;
    this->Name = name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this-> Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &what)
{
    this->Name = what.Name;
    this->Hitpoints = what.Hitpoints;
    this->Energy_points = what.Energy_points;
    this->Attack_damage = what.Attack_damage;
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << Name << " attack " << target << " by " << Attack_damage << " damage and double hit " << target << " by " << Attack_damage << " damage" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << this->Name << "- HOW COULD YOU LET IT!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterredin Gate keeper mode." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &f)
{
    this->Name = f.Name;
    this->Hitpoints = f.Hitpoints;
    this->Attack_damage = f.Attack_damage;
    this->Energy_points = f.Energy_points;
    return(*this);
}
