//
// Created by Jeannetta Marian on 8/29/21.
//

#ifndef EX00_CHAR_SING_HPP
#define EX00_CHAR_SING_HPP

#include "Needed.hpp"

class Char_sing : public Needed {
public:
    Char_sing();
    Char_sing(std::string const &chr);
    ~Char_sing();
    Char_sing(const Char_sing & num);
    void transform();
    const char &getChar();
};

std::ostream &operator<< (std::ostream &out, Char_sing & num);
#endif //EX00_CHAR_SING_HPP
