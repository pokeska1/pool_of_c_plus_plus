

#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"


int main() {
//    IMateriaSource* src = new MateriaSource();
//    MateriaSource* my = new MateriaSource();
//    MateriaSource* myCopy = new MateriaSource(*my);
//
//    my->learnMateria(new Ice());
//    my->learnMateria(new Cure());
//    ICharacter* me = new Character("me");
//    AMateria* tmp;
//    tmp = my->createMateria("ice");
//    me->equip(tmp);
//    tmp = my->createMateria("cure");
//    me->equip(tmp);
//    ICharacter* bob = new Character("bob");
//    me->use(0, *bob);
//    me->use(1, *bob);
//
//    myCopy->learnMateria(new Ice());
//    myCopy->learnMateria(new Cure());
//    ICharacter* met = new Character("met");
//    AMateria* tmpt;
//    tmpt = myCopy->createMateria("ice");
//    met->equip(tmpt);
//    tmpt = myCopy->createMateria("cure");
//    met->equip(tmpt);
//    ICharacter* bobt = new Character("bobt");
//    met->use(0, *bobt);
//    met->use(1, *bobt);
//
//    src->learnMateria(new Ice());
//    src->learnMateria(new Cure());
//    ICharacter* mef = new Character("mef");
//    AMateria* tmpf;
//    tmpf = src->createMateria("ice");
//    mef->equip(tmpf);
//    tmpf = src->createMateria("cure");
//    mef->equip(tmpf);
//    ICharacter* bobf = new Character("bobf");
//    mef->use(0, *bobf);
//    mef->use(1, *bobf);
//
//    delete bob;
//    delete me;
//    delete src;
//    delete bobt;
//    delete met;
//    delete bobf;
//    delete mef;
//    delete my;
//    delete myCopy;
//    return 0;
//  /*
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->unequip(1);
    me->use(1, *bob);
    me->use(5, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
//    */
}
