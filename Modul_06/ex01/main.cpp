
#include <iostream>
#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data*>(raw));
}

int main() {
    Data *meh = new Data();
    std::cout << &meh << "\n";
    std::cout << *meh << "\n";
    uintptr_t ptr;
    ptr = serialize(meh);
    delete(meh);
    Data *new_meh;
    new_meh = deserialize(ptr);
    std::cout << &new_meh << "\n";
    std::cout << *new_meh << "\n";
   // delete(new_meh); нельзя
    return 0;
}
