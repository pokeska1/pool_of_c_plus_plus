//
// Created by Jeannetta Marian on 8/26/21.
//

#include "Form.hpp"

Form::Form(): name("Void"), grade_sing_it(75), grade_execute_it(75)
{
    signed_form = false;
}

Form::Form(std::string name,  int grade_sit, int grade_exit): name(name), grade_sing_it(grade_sit), grade_execute_it(grade_exit)
{
    this->signed_form = false;
    if (grade_sit < 1  || grade_exit < 1)
        GradeTooHighException();
    else if (grade_sit > 150  || grade_exit > 150)
        GradeTooLowException();
}

Form::Form(Form const &f) : name(f.name), grade_sing_it(f.getGrade_sit()), grade_execute_it(f.getGrade_exit())
{
    signed_form = f.signed_form;
    if (f.getGrade_sit() < 1  || f.getGrade_exit() < 1)
         GradeTooHighException();
    else if (f.getGrade_sit() > 150  || f.getGrade_exit() > 150)
        GradeTooLowException();
}

Form::~Form(){}

void Form::GradeTooHighException()
{
    std::string error = "\e[0;35mERROR: FORM GradeTooHighException\e[0m";
    throw std::logic_error(error);
}

void Form::GradeTooLowException()
{
    std::string error = "\e[0;35mERROR: FORM GradeTooLowException\e[0m";
    throw std::logic_error(error);
}

std::string const &Form::getName(void)
{
    return(this->name);
}

int Form::getGrade_sit(void) const
{
    return(this->grade_sing_it);
}

int Form::getGrade_exit(void) const
{
    return(this->grade_execute_it);
}

bool Form::getSigned_form(void)
{
    return(this->signed_form);
}

void Form::beSigned(Bureaucrat &bur)
{
    if (bur.getGrade() <= getGrade_sit())
        signed_form = true;
    bur.signForm(*this);
}

std::ostream & operator << (std::ostream  & out, Form & f)
{
    out << "_________________________________________________________"
        << "________________________________________________________"<< "\n";
    out << "|Name this Form is ";
    out << f.getName();
    out << "\t| Grade for sing it = ";
    out <<  f.getGrade_sit();
    out << "\t| Grade for execute it = ";
    out << f.getGrade_exit();
    out << "\t| signed_form ";
    if (f.getSigned_form() == false)
        out << "= False";
    else
        out << "= True";
    out << "\t|" << "\n";
    out << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾"
    << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";
    return(out);
}



