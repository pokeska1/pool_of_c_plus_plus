//
// Created by Jeannetta Marian on 8/27/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("presidential pardon" , "target",  75, 75)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon" , target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & PPF)
{
    PPF.getGrade_sit();
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::action() const
{
    std::cout   << this->getTarget()  << "has been pardoned by Zafod Beeblebrox.";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (tester(executor))
        action();
}

std::ostream & operator << (std::ostream  & out, PresidentialPardonForm & f)
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