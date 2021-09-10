//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Double_num.hpp"

Double_num::Double_num(){}
Double_num::Double_num(double const &str) : Needed()
{
    this->d = str;
    impossible = true;
    name = "Double";
}

Double_num::Double_num(std::string const &str) : Needed()
{
    try{
        dot_zero = false;
        int check = checker(str);
        if (!check)
        {
            impossible = false;
            name = "impossible";
            return;
        }
        d = std::stod(str);
        impossible = true;
        name = "Double";
        unsigned int ptr = str.find('.');
        ptr++;
        if (ptr)
        {
            while(ptr < str.length())
            {
                if  (str[ptr] != '0')
                    if( str[ptr] != 'f')
                    {
                        dot_zero = false;
                        return;
                    }
                ptr++;
            }
            dot_zero = true;
        }
        else if (check != 2)
            dot_zero = true;
    }
    catch(...)
    {
        impossible = false;
        name = "impossible";
    }
}
Double_num::~Double_num(){}

Double_num::Double_num(const Double_num & num)
{
    this->d = num.d;
}

void Double_num::transform()
{
    if (impossible == false)
    {
        std::cout <<"Double = " << name << "\n";
    }
    else
    {
        std::cout << name << " = " << d ;
        if (dot_zero)
        {
            std::cout<<".0" <<"\n";
        }
        else
            std::cout <<"\n";
    }
}

const double &Double_num::getDouble()
{
    return (d);
}

std::ostream &operator<< (std::ostream &out, Double_num & d)
{
    if (d.getNum() == -1)
    {
        out << d.getFloat();
    }
    else
        out << d.getFloat() << " " << std::to_string(d.getDouble());
    return(out);
}