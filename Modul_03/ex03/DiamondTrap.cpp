//
// Created by Jeannetta Marian on 8/23/21.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():  ClapTrap() , FragTrap() ,  ScavTrap()
{
    Name = "new_name";
    Hitpoints = 100;
    Energy_points = 100;
    Attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string new_name) : ClapTrap(new_name + "_clap_name"),  FragTrap(new_name) , ScavTrap(new_name)
{
    std::string meh = new_name + "_clap_name";
    ClapTrap::Name = meh;
//    FragTrap::Name = new_name;
//    ScavTrap::Name = new_name;
    Name = new_name;
    Hitpoints = FragTrap::Hitpoints;
    Energy_points = ScavTrap::Energy_points;
    Attack_damage = FragTrap::Attack_damage;
    std::cout << this->FragTrap::Name << "- I'm HAVE THE POWER!'" << std::endl;
}

//DiamondTrap::DiamondTrap(std::string new_name) :  FragTrap(new_name) , ScavTrap(new_name)
//{
//    Name = new_name;
//    Hitpoints = FragTrap::Hitpoints;
//    Energy_points = ScavTrap::Energy_points;
//    Attack_damage = FragTrap::Attack_damage;
//    std::cout << Name << "- I'm HAVE THE POWER!'" << std::endl;
//}


DiamondTrap::DiamondTrap(const DiamondTrap &what)
{
    this->Name = what.Name;
    this->Hitpoints = what.Hitpoints;
    this->Energy_points = what.Energy_points;
    this->Attack_damage = what.Attack_damage;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "who Am I ?! I am - " <<  Name << " AND ! " << this->ClapTrap::Name << std::endl;

}

DiamondTrap::~DiamondTrap()
{
    std::cout << Name << "- I'm not strong enough:(" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &f)
{
    this->Name = f.Name;
    this->Hitpoints = f.Hitpoints;
    this->Attack_damage = f.Attack_damage;
    this->Energy_points = f.Energy_points;
    return(*this);
}