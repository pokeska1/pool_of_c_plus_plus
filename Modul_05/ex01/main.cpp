
#include <iostream>
#include <string>
#include "Form.hpp"

int main()
{
    try{
       Bureaucrat small("Jack", 5);
       std::cout << small << std::endl;
       Form first("A.145",  5 , 46);
       std::cout << first << std::endl;
       first.beSigned(small);
       std::cout << first << std::endl;
       Form second("B.278",  1 , 46);
       std::cout << second << std::endl;
       second.beSigned(small);
       std::cout << second << std::endl;
       Form third("B.278",  0 , 46);
    }
    catch (const std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    return 0;
}
