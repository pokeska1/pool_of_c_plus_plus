//
// Created by Jeannetta Marian on 8/21/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
    public:
         ScavTrap();
         ScavTrap &operator=(ScavTrap const &f);
         ScavTrap(const ScavTrap &what);
         ScavTrap(std::string const &Name);
        ~ScavTrap();
        void guardGate();
        void attack(std::string const & target);
    private:

};


#endif //EX01_SCAVTRAP_HPP
