//
// Created by Jeannetta Marian on 8/27/21.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include <fstream>
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const & SCF);
    ~ShrubberyCreationForm();
    void action() const;
    void execute(Bureaucrat const & executor) const;
    void operator=(ShrubberyCreationForm & f);
};

std::ostream &operator<< (std::ostream  &out, ShrubberyCreationForm  & bur);
#endif //EX02_SHRUBBERYCREATIONFORM_HPP
