

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
    const Dog* j = new Dog();
    const Cat* i = new Cat();
    //const Animal* a = new Animal();
    std::cout << "~~~~~~~~~~~~~~~~~~test dip copy~~~~~~~~~~~~~~~~~" << std::endl;
    basic();
    std::cout << "~~~~~~~~~~~~~~~~~~cat ideas(˃ᆺ˂)~~~~~~~~~~~~~~~~~" << std::endl;
    Animal **arr = new Animal*[10];
    for(int k = 0; k < 10 ; k++)
    {
        std::cout << k << " ";
        arr[k++] = new Cat(*i);
        std::cout << k << " ";
        arr[k] = new Dog(*j);
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
    //delete a;
}
