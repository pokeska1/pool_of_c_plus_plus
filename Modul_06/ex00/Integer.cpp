//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Integer.hpp"

Integer::Integer(){
    num = 5;
    name = "Int";
}

Integer::Integer(int const &str): Needed()
{
    this->num = str;
    impossible = true;
    name = "Int";
}

Integer::Integer(std::string const &str) : Needed()
{
    try{
        if (!checker(str))
        {
            impossible = false;
            name = "impossible";
            return;
        }
        this->num = std::stoi(str);
        impossible = true;
        name = "Int";
    }
    catch (...) {
        impossible = false;
        name = "impossible";
    }
}

Integer::~Integer(){}

Integer::Integer(const Integer & num) : Needed(){
    this->num = num.num;
    this->name = name;
}

void Integer::transform()
{
    if (impossible == false)
    {
        std::cout <<"Int = " << name << "\n";
    }
    else
        std::cout <<"Int = " << num << "\n";
}

const int &Integer::getInt()
{
    return(this->num);
}

std::ostream & operator << (std::ostream & out, Integer & num)
{
    out << num.getName() << " " << std::to_string(num.getInt());
    return(out);
}