//
// Created by Jeannetta Marian on 8/26/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        GradeTooHighException();
    else if (grade > 150)
        GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bur) :  name(bur.name)
{
    if (bur.grade < 1)
        GradeTooHighException();
    else if (bur.grade > 150)
        GradeTooLowException();
    else
        this->grade = bur.grade;
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::GradeTooHighException()
{
    std::string error = "ERROR : GradeTooHighException";
    throw std::logic_error(error);
}

void Bureaucrat::GradeTooLowException()
{
    std::string error = "ERROR : GradeTooLowException";
    throw std::logic_error(error);
}

void Bureaucrat::increment_Grade(int idx)
{
    std::cout << "increment " << getGrade() << " to " <<  (getGrade() - idx)  << std::endl;

    if (getGrade() == 1)
        GradeTooHighException();
    for (int i = 1; i <= idx; i++)
    {
        if (grade < 1)
        {
            GradeTooHighException();
            grade = 1;
            return;
        }
        grade--;
    }
}

void Bureaucrat::decrement_Grade(int idx)
{
    std::cout << "decrement " << getGrade() << " to " <<  (getGrade() + idx)  << std::endl;
    if (getGrade() == 150)
        GradeTooLowException();
    for (int i = 1; i <= idx; i++)
    {
        if (grade > 150)
        {
            grade = 150;
            GradeTooLowException();
            return;
        }
        grade++;
    }
}

std::string const &Bureaucrat::getName(void)
{
    return(this->name);
}
int Bureaucrat::getGrade(void)
{
    return(this->grade);
}

std::ostream &operator << (std::ostream &out, Bureaucrat & bur)
{
    out << "|Grade = ";
    out << bur.getGrade();
    out << "| Hi's Name is ";
    out << bur.getName();
    out << " |";
    return(out);
}

Bureaucrat::Bureaucrat() : name("Void")
{
    grade = 75;
}

Bureaucrat::Bureaucrat(std::string name) : name(name)
{
    grade = 75;
}

Bureaucrat::Bureaucrat(int grade) : name("Void")
{
    if (grade < 1)
        GradeTooHighException();
    else if (grade > 150)
        GradeTooLowException();
    else
        this->grade = grade;
}
