//
// Created by Jeannetta Marian on 8/27/21.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const & SCF);
    ~PresidentialPardonForm();
    void action() const;
    void execute(Bureaucrat const & executor) const;
    void operator=(PresidentialPardonForm & f);
};

std::ostream & operator << (std::ostream  & out, PresidentialPardonForm & f);

#endif //EX02_PRESIDENTIALPARDONFORM_HPP
