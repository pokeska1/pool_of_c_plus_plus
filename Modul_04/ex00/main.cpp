

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();


    std::cout << std::endl;
    std::cout << std::endl;


    std::cout << "~~~~~~~~~~~~~WrongAnimal and Cat~~~~~~~~~~~~~~" << std::endl;
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wj = new WrongCat();
    std::cout << wmeta->getType() << " " << std::endl;
    std::cout << wj->getType() << " " << std::endl;
    wmeta->makeSound(); //will output the cat sound!
    wj->makeSound();
    std::cout << std::endl;
    delete wj;
    delete wmeta;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    delete i;
    delete j;
    delete meta;
}
