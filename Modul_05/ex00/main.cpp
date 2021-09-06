#include <iostream>

#include "Bureaucrat.hpp"

int main() {
    try{
        Bureaucrat small("Jack", 5);

        std::cout << small << std::endl;

        //decrement grade to (grade + 1)
        small.decrement_Grade(1);
        std::cout  << small << std::endl;

        //increment grade to (grade - 2)
        small.increment_Grade(2);
        std::cout <<  small << std::endl;

        //increment grade to (grade - 1)
        small.increment_Grade(1);
        std::cout <<  small << std::endl;

        //increment grade to (grade - 2)
        small.increment_Grade(2);
        std::cout << small << std::endl;

        //decrement grade to (grade + 140)
        small.decrement_Grade(140);
        std::cout <<small << std::endl;

        //decrement grade to (grade + 149)
        small.decrement_Grade(149);
        std::cout<< small << std::endl;

    }
    catch(const std::exception &ex)
    {
        std::cout << "Что то не так. "<< ex.what() << std::endl;
    }
    return 0;
}
