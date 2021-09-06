//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Integer.hpp"

Integer::Integer(){
    num = 5;
    name = "Int";
}

Integer::Integer(int const &str, int const &flag): Needed()
{
    if (flag)
    {
        this->num = 0;
        name = "impossible";
        impossible = false;
        return ;
    }
    this->num = str;
    impossible = true;
    name = "Int";
}

Integer::Integer(std::string const &str, int const &flag) : Needed()
{

   // this->num = std::stoi(str);
    int len = str.length();
    int minus = 1;
    if (flag)
    {
        this->num = 0;
        name = "impossible";
        impossible = false;
        return ;
    }

   for(int i = 0; i < len && str[i] != '.' && str[i] != 'f'; i++)
   {
       if (str[i] == '-')
       {
           minus = -1;
           continue;
       }
       else if (str[i] == '+')
         continue;
       this->num = this->num * 10 + (str[i] - 48);
   }
   if (minus == -1)
       this->num *= -1;
   impossible = true;
    name = "Int";
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