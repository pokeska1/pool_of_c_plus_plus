//
// Created by Jeannetta Marian on 8/29/21.
//

#ifndef EX00_NEEDE_HPP
#define EX00_NEEDE_HPP

#include <iostream>
#include <string>

class Needed {
public:
    Needed();
    virtual ~Needed();
    Needed(const Needed &need);
    virtual void transform() = 0;
    virtual void setName(const std::string &name);
    virtual const std::string &getName();
    virtual void setNum(const int &num);
    virtual const int &getNum();
    virtual void setChar(const char &chr);
    virtual const char &getChar();

    virtual void setFloat(const float &fl);
    virtual const float &getFloat();

    virtual void setDouble(const double &d);
    virtual const double &getDouble();
    int checker(std::string const &arv);
protected:
    std::string name;
    char chr;
    float fl;
    bool impossible;
    double d;
    int num;
    bool dot_zero;
};
std::ostream &operator<< (std::ostream  &out, Needed & need);
#endif //EX00_NEEDE_HPP
