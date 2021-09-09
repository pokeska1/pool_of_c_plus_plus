
#include "easyfind.hpp"



int main() {
    try{
        std::array<int,5> first = {1, 2 ,3 , 4, 5};
        easyfind(first, 4);
    }
    catch(std::exception const & e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
