//
// Created by Jeannetta Marian on 8/27/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request" , "target", 75, 75)
{}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request" , target,  72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & RRF)
{
    RRF.getGrade_sit();
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void RobotomyRequestForm::action() const
{
    std::cout   << "drilling noises " << "drilling noises " << "drilling noises " << "drilling noises\n"
                << this->getTarget()<< " has been"
                << " robotomized successfully 50% of the time.\n";
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (tester(executor))
        action();
}

std::ostream & operator << (std::ostream  & out, RobotomyRequestForm & f)
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
