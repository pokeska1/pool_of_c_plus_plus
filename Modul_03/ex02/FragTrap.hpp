//
// Created by Jeannetta Marian on 8/21/21.
//

#ifndef EX02_FRAGTRAP_HPP
#define EX02_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string new_name);
        FragTrap(const FragTrap &what);
        ~FragTrap();
        FragTrap &operator=(FragTrap const &f);
        void highFivesGuys(void);
};


#endif //EX02_FRAGTRAP_HPP
