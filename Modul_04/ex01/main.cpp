

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void basic(void)
{
    const Dog Pug;
    const Dog Gav = Pug;
    std::cout << Gav.getType() << std::endl;
}

int main() {
    std::cout << "~~~~~~~~~~~~~~~~~~constructors~~~~~~~~~~~~~~~~~" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal* a = new Animal();
    std::cout << "~~~~~~~~~~~~~~~~~~test dip copy~~~~~~~~~~~~~~~~~" << std::endl;
    basic();
    std::cout << "~~~~~~~~~~~~~~~~~~cat ideas(˃ᆺ˂)~~~~~~~~~~~~~~~~~" << std::endl;
    Animal **arr = new Animal*[10];

    for(int k = 0; k < 10 ; k++)
    {
        std::cout << k << " ";
        arr[k++] = new Animal(*j);
        std::cout << k << " ";
        arr[k] = new  Animal(*i);
    }
    for(int k = 0; k < 10 ; k++)
    {
        std::cout << k << " ";
        std::cout <<  arr[k]->getType() << std::endl;
    }
    std::cout << "~~~~~~~~~~~~~~~~~~destructors arr~~~~~~~~~~~~~~~~~" << std::endl;
    for(int k = 0; k < 10 ; k++)
    {
        std::cout << k << " ";
        delete arr[k];
    }
    delete[] arr;
    std::cout << "~~~~~~~~~~~~~~~~~~destructors~~~~~~~~~~~~~~~~~" << std::endl;
    delete j;//should not create a leak
    delete i;
    delete a;
}
