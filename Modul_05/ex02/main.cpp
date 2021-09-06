
#include <iostream>
#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"



int main() {
    try{
         Bureaucrat Jack("Jack", 46);

         Form *first = new ShrubberyCreationForm("home");
         Form *second = new RobotomyRequestForm("work");
         Form *third = new PresidentialPardonForm("Boris");

        first->beSigned(Jack);
        Jack.executeForm(*first);
        second->beSigned(Jack);
        Jack.executeForm(*second);

        Jack.increment_Grade(1);
        Jack.executeForm(*second);
        third->beSigned(Jack);
        Jack.executeForm(*third);

        delete first;
        delete second;
        delete third;
    }
    catch(std::exception const &error)
    {
        std::cout << error.what() << "\n";
    }

    return 0;
}
