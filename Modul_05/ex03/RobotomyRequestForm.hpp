//
// Created by Jeannetta Marian on 8/27/21.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm  : public Form{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const & RRF);
    ~RobotomyRequestForm();
    void action() const;
    void execute(Bureaucrat const & executor) const;
    void operator=(RobotomyRequestForm & f);
};

std::ostream & operator << (std::ostream  & out, RobotomyRequestForm & f);


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
