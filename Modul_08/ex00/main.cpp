#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main() {
    try{
        std::vector<int> myVector;
        myVector.push_back(1);
        myVector.push_back(12);
        myVector.push_back(13);
        myVector.push_back(14);

        std::vector<int>::iterator it4 = easyfind(myVector, 14);
        std::cout << *it4<< "\n";
        std::vector<int>::iterator it = easyfind(myVector, 12);
        std::cout << *it<< "\n";
        std::vector<int>::iterator it2 = easyfind(myVector, 1);
        std::cout << *it2<< "\n";

        std::vector<int>::iterator it5 = easyfind(myVector, 8);
        std::cout << *it5<< "\n";

        std::vector<int>::iterator it3 = easyfind(myVector, 13);
        std::cout << *it3<< "\n";
    }
    catch(std::exception const & e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
