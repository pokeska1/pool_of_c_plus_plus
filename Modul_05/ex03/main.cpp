
#include "Form.hpp"
#include "Intern.hpp"

//"presidential pardon", "shrubbery creation", "robotomy request"

int main() {
    try{
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        Bureaucrat Jack("Jack", 40);
        rrf->beSigned(Jack);
        Jack.executeForm(*rrf);
        delete rrf;
    }
    catch (const std::exception &error) {
        std::cout << error.what() << "\n";
    }
    return 0;
}
