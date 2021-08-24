//
// Created by Jeannetta Marian on 8/23/21.
//

#ifndef EX03_DIAMONDTRAP_HPP
#define EX03_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap{
    public:
        DiamondTrap();
        DiamondTrap(std::string new_name);
        DiamondTrap(const DiamondTrap &what);
        ~DiamondTrap();
        DiamondTrap &operator=(DiamondTrap const &f);
        void whoAmI();
    private:
        std::string Name;
};


#endif //EX03_DIAMONDTRAP_HPP
