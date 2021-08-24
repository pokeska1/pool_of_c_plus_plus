//
// Created by Jeannetta Marian on 8/21/21.
//

#ifndef EX00_CLAPTRAP_HPP
#define EX00_CLAPTRAP_HPP

#include <iostream>


class ClapTrap {

public:
    ClapTrap();
    ClapTrap(std::string new_name);
    ClapTrap(const ClapTrap &what);
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap const &f);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    std::string & getName();
    void setName(std::string &name);

protected:
    std::string Name;
    int         Hitpoints;
    int         Energy_points;
    int         Attack_damage;
};


#endif //EX00_CLAPTRAP_HPP
