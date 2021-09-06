//
// Created by Jeannetta Marian on 8/26/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {
public:
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &bur);
    Bureaucrat();
    Bureaucrat(std::string name);
    Bureaucrat(int grade);
    ~Bureaucrat();


    void GradeTooHighException();
    void GradeTooLowException();
    void increment_Grade(int idx);
    void decrement_Grade(int idx);

    std::string const &getName(void);
    int getGrade(void);

    std::ostream &operator<< (std::ostream  &out);
private:
    const std::string name;
    int grade;
};

std::ostream &operator<< (std::ostream  &out, Bureaucrat & bur);

#endif //EX00_BUREAUCRAT_HPP
