
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout <<"ClapTrap CLASS" << std::endl;
    ClapTrap last_one("ClapTrap");
    last_one.attack("Jeck");
    last_one.takeDamage(7);
    last_one.beRepaired(3);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout <<"ScavTrap CLASS" << std::endl;
    ScavTrap another_one("ScavTrap");
    another_one.guardGate();
    another_one.attack("Jeck");
    another_one.takeDamage(2);
    another_one.beRepaired(15);

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout <<"FragTrap CLASS" << std::endl;
    FragTrap frag("FragTrap");
    frag.highFivesGuys();
    frag.attack("Jeck");
    frag.takeDamage(2);
    frag.beRepaired(15);
    return 0;
}
