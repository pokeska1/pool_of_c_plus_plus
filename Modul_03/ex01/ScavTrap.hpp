//
// Created by Jeannetta Marian on 8/21/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

        ScavTrap(std::string Name);
        ~ScavTrap();
        void guardGate();
        void attack(std::string const & target);
    private:
        ScavTrap();
        ScavTrap &operator=(ScavTrap const &f);
        ScavTrap(const ScavTrap &what);

};


#endif //EX01_SCAVTRAP_HPP
