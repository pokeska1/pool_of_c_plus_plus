//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Needed.hpp"

Needed::Needed()
{
}

Needed::~Needed(){}

Needed::Needed(const Needed &need)
{
    name = need.name;
}

void Needed::setName(const std::string &name)
{
    this->name = name;
}

const std::string &Needed::getName()
{
    return(this->name);
}

void Needed::setNum(const int &num)
{
    this->num = num;
}
const int &Needed::getNum()
{
    return(this->num);
}

void Needed::setChar(const char &chr)
{
    this->chr = chr;
}

const char &Needed::getChar()
{
    return(chr);
}


void Needed::setFloat(const float &fl)
{
    this->fl = fl;
}

const float &Needed::getFloat()
{
    return(fl);
}

void Needed::setDouble(const double &d)
{
    this->d = d;
}
const double &Needed::getDouble()
{
    return(d);
}



std::ostream & operator << (std::ostream  & out, Needed & need)
{
   out << need.getName();
    return(out);
}