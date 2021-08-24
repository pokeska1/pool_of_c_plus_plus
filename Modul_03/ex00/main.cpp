
#include "ClapTrap.hpp"

int main() {
    ClapTrap last_one("ClapTrap");
    last_one.attack("Jack");
    last_one.takeDamage(7);
    last_one.beRepaired(3);
    return 0;
}
