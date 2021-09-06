//
// Created by Jeannetta Marian on 8/26/21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

class Form {
public:
    Form();
    Form(std::string name, int grade_sit, int grade_exit);
    Form(std::string name, std::string target,int grade_sit, int grade_exit);
    Form(Form const &f);
    virtual ~Form();
    void GradeTooHighException();
    void GradeTooLowException();
    std::string const &getName() const;
    std::string const &getTarget() const;
    int getGrade_sit() const;
    int getGrade_exit() const;
    bool getSigned_form() const;
    void beSigned(Bureaucrat &bur);
    virtual void execute(Bureaucrat const & executor) const = 0;
    virtual bool tester(Bureaucrat const & executor) const;
private:
    const std::string name;
    const std::string target;
    const int    grade_sing_it;
    const int    grade_execute_it;
    bool  signed_form;

};

std::ostream &operator<< (std::ostream  &out, Form & bur);
#endif //EX01_FORM_HPP
