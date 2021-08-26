//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource {
public:
    MateriaSource();
    MateriaSource(MateriaSource const &maso);
    ~MateriaSource();
    void learnMateria(AMateria* am);
    AMateria* createMateria(std::string const & type);
    MateriaSource &operator=(MateriaSource const &maso);
protected:
    AMateria **bag;
};


#endif //EX03_MATERIASOURCE_HPP
