//
// Created by Jeannetta Marian on 8/27/21.
//

#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Form *Intern::creat_pres(std::string target)
{
    return (new PresidentialPardonForm(target));
}

Form *Intern::creat_robot(std::string target)
{
    return (new RobotomyRequestForm(target));
}

Form *Intern::creat_shrbery(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form *Intern::creat_exp(std::string target)
{
    target ="Error : Intern don't know this Form for this target -" + target;
    throw std::logic_error(target);
}

Form *Intern::makeForm(std::string const &name_form, std::string const &target)
{
    int i;
    std::string str[4] = {"presidential pardon", "shrubbery creation", "robotomy request", ""};
    for(i = 0; str[i] != name_form && i < 3; i++)
    {}
    while (str[i] != name_form && i < 3)
        i++;
    typedef Form	*(Intern::*arrOper)(std::string);
    arrOper operations[4] =
    {
        &Intern::creat_pres,
        &Intern::creat_shrbery,
        &Intern::creat_robot,
        &Intern::creat_exp
    };
    return ((this->*(operations[i]))(target));
}
