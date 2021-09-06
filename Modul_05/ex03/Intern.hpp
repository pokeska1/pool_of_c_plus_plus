//
// Created by Jeannetta Marian on 8/27/21.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "Form.hpp"

class Form;
class Intern {
public:
    Intern();
    ~Intern();
    Form *creat_pres(std::string target);
    Form *creat_robot(std::string target);
    Form *creat_shrbery(std::string target);
    Form *creat_exp(std::string target);

    Form *makeForm(std::string const &name_form, std::string const &target);
};


#endif //EX03_INTERN_HPP
