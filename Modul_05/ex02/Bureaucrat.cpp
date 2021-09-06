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
            grade = 1;
            GradeTooHighException();
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

int Bureaucrat::getGrade(void) const
{
    return(this->grade);
}

void Bureaucrat::signForm(Form &f) const
{
    if (f.getSigned_form())
        std::cout << name << "\e[0;32m signs \e[0m" << f.getName() << "\n";
    else
        std::cout   << name << "\e[0;31m   cannot sign Form-\e[0m" << f.getName()<< "\n" << "Because grade " << name
        << " = " << grade << " Toolow compared " << f.getName()
        << " needed higher or equal " << f.getGrade_sit() << "\n";
}

void Bureaucrat::executeForm(Form const & form)
{
    if (this->getGrade() <= form.getGrade_sit()
        && this->getGrade() <= form.getGrade_exit()
        && form.getSigned_form() == true)
    {
        form.execute(*this);
        std::cout << getName() << " executes " << form.getName() << "\n";
    }
    else
    {
        std::cout << getName() << "\e[0;31m was't executes \e[0m" << form.getName() << "\n";
        if (form.getSigned_form() != true)
            std::cout << "Form named- \"" << form.getName() << "\" is'n Signed" << "\n";
        else if (this->getGrade() > form.getGrade_exit())
            std::cout << "Grade execute Bureaucrat is to low needed >= " << form.getGrade_exit() << "\n";
        else
            std::cout << "Grade sing in Bureaucrat is to low neded >= " << form.getGrade_sit() << "\n";
    }
}


std::ostream &operator << (std::ostream &out, Bureaucrat & bur)
{
    out << "_________________________________________________________" <<"\n";
    out << "|Hi's Name is ";
    out << bur.getName();
    out << "\t\t| Grade = ";
    out << bur.getGrade();
    out << "\t\t|" <<"\n";
    out << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";
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
