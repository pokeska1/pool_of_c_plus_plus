//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"


class ICharacter;
class Ice : virtual public AMateria{
public:
    Ice();
    Ice(Ice const &ice);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
    void setType(std::string const &type);
    Ice &operator=(Ice const &cure);
};


#endif //EX03_ICE_HPP
