//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;
class AMateria {
protected:
    std::string type;

public:
    AMateria(std::string const & type);
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    std::string const & getType() const; //Returns the materia type

};


#endif //EX03_AMATERIA_HPP
