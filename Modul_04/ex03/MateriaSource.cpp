//
// Created by Jeannetta Marian on 8/24/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    bag = new AMateria*[4];
    for (int i = 0; i < 4; i++)
        bag[i] = NULL;
}
MateriaSource::MateriaSource(MateriaSource const &maso)
{
    bag = new AMateria*[4];
    for (int i = 0; i< 4; i++)
        bag[i] = maso.bag[i];
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete bag[i];
    delete[] bag;
}

void MateriaSource::learnMateria(AMateria* am)
{
    int i;
    for(i = 0; bag[i] != NULL && i < 4; i++)
    {}
    if (i == 4)
        i = 0;
    bag[i] = am;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;
    for(i = 0;  i < 4; i++)
    {
        if (bag[i]->getType() == type)
            return (bag[i]->clone());
    }
    return(0);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &maso)
{
    for (int i = 0; i < 4; i++)
        delete bag[i];
    delete[] bag;
    bag = new AMateria*[4];
    for (int i = 0; i< 4; i++)
    {
        bag[i] = maso.bag[i];
    }
    return(*this);
}
