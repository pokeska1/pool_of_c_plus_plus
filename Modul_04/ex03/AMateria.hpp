//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;
class AMateria {
protected:
    AMateria();
    std::string type;
public:
    AMateria(std::string const & type);
    AMateria(AMateria const &amat);
    AMateria &operator=(AMateria const &amat);
    virtual ~AMateria();


    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    std::string const & getType() const; //Returns the materia type
     virtual void setType(std::string const &type) = 0;
};


#endif //EX03_AMATERIA_HPP
