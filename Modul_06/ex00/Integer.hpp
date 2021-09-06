//
// Created by Jeannetta Marian on 8/29/21.
//

#ifndef EX00_INTEGER_HPP
#define EX00_INTEGER_HPP

#include "Needed.hpp"
#include <iostream>
#include <string>


class Integer : public Needed {
public:
    Integer();
    Integer(std::string const &str, int const &flag);
    Integer(int const &str, int const &flag);
    ~Integer();
    Integer(const Integer & num);
    void transform();
    const int &getInt();
};

std::ostream &operator<< (std::ostream &out, Integer & num);
#endif //EX00_INTEGER_HPP
