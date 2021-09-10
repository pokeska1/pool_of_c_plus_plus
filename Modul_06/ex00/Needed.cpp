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

int Needed::checker(std::string const &arv)
{
    unsigned long len = arv.length();
    std::string garbage;
    std::string garbage2;
    garbage ="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM§-=][\\';/.,±!@#$%^&*()_+`:\"|~<>?";
    garbage2 ="qwertyuiopasdghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM§=][\\';/,!@#$%^&*()_`:\"|~<>?";
    std::size_t er = arv.find_first_of(garbage);
    std::size_t er2 = arv.find_first_of(garbage2);
        if (er != std::string::npos)
        {
            if (arv.compare("nan") == 0 || arv.compare("nanf") == 0
            || arv.compare("inf") == 0 || arv.compare("inff") == 0
            || arv.compare("+inf") == 0 || arv.compare("+inff") == 0
            || arv.compare("-inf") == 0 || arv.compare("-inff") == 0)
                return(2);
            else if (er2 != std::string::npos)
                return(0);
            else if (arv.find('+') < len && arv.rfind("+") != 0)
                return(0);
            else if (arv.find('-') < len && arv.rfind("-") != 0)
                return(0);
            else if (arv.rfind('f') < len && arv.rfind('f') == (arv.length() - 1)
            && arv.find_first_of('f') == arv.find_last_of('f'))
            {
                if((arv.rfind('.') < len) &&
                (arv.find_first_of('.') == arv.find_last_of('.')) &&
                (arv.rfind('.') !=  len - 1))
                    return(1);
                else
                    return(0);
            }
            else if (arv.rfind('.') < len && arv.rfind('.') != (arv.length() - 1)
            && arv.find_first_of('.') == arv.find_last_of('.'))
                return(1);
            else
                return(0);
        }
        return(1);
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