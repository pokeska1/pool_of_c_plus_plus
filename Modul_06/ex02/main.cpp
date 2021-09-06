#include <iostream>
#include "ctime"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    srand(time(NULL));
    int i = rand();
    std::cout << "Random = " << i << "\n";
    if (i % 3 == 0 || i % 9 == 0 || i % 6 == 0)
    {
         A *meh = new A;
        return(meh);
    }
    else if (i % 5 == 0 || i % 7 == 0 || i % 8 == 0)
    {
        B *meh = new B;
        return(meh);
    }
    C *meh = new C;
    return(meh);
    //рандомно создать A B или С
}

void identify(Base* p)
{
    A *new_a = dynamic_cast<A*>(p);
    B *new_b = dynamic_cast<B*>(p);
    C *new_c = dynamic_cast<C*>(p);
    if (new_a != NULL)
        std::cout << "A" << "\n";
    else if (new_b != NULL)
        std::cout << "B" << "\n";
    else if (new_c != NULL)
    std::cout << "C" << "\n";
}

void identify(Base& p)
{
    try {
        A &new_a = dynamic_cast<A&>(p);
        (void)new_a;
            std::cout << "A" << "\n";
            return;
    }
    catch(std::bad_cast const &lol) {

    }
    try{
        B &new_b = dynamic_cast<B&>(p);
        (void)new_b;
        std::cout << "B" << "\n";
        return;
    }
    catch(std::bad_cast const &lolz) {

    }
    try{
        C &new_c = dynamic_cast<C&>(p);
        (void)new_c;
        std::cout << "C" << "\n";
        return;
    }
    catch(std::bad_cast const &lolx) {

    }

    //функция определяет &p   Это А B или C
}

int main() {
    Base *meh;
    Base *lol;
    meh = generate();
    lol = generate();
    identify(meh);
    identify(*lol);
    delete(meh);
    delete(lol);
    return 0;
}
