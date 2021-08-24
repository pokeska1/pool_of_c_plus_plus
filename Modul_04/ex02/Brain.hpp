//
// Created by Jeannetta Marian on 8/24/21.
//

#ifndef EX01_BRAIN_HPP
#define EX01_BRAIN_HPP

#include "Animal.hpp"

class Brain {
public:
    Brain();
    ~Brain();
    Brain(const Brain &copy_class);
    Brain &operator=(const Brain &copy_class);
    void setIdea(int i);
private:
    std::string *ideas;
};


#endif //EX01_BRAIN_HPP
