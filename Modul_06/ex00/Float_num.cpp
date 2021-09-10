//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Float_num.hpp"

Float_num::Float_num()
{
    name = "Float";
    fl = 0.0;
}

Float_num::Float_num(float const &str) : Needed()
{
    int i = static_cast<int>(str) % 10;
    if (i == 0)
        this->fl = static_cast<float>(str + 0.0000000000000001);
    else
      this->fl = str;
    impossible = true;
    name = "Float";
}

Float_num::Float_num(std::string const &str) : Needed()
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
        this->fl = std::stof(str);
        impossible = true;
        name = "Float";
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
    catch (...) {
        impossible = false;
        name = "impossible";
    }
}

Float_num::~Float_num()
{

}

Float_num::Float_num(const Float_num & fl)
{
    this->name = fl.name;
    this->fl = fl.fl;
}

void Float_num::transform()
{
    if (impossible == false)
    {
        std::cout <<"Float = " << name << "\n";
    }
    else
    {
        std::cout << name << " = " << static_cast<float>(fl);
        if (dot_zero)
        {
            std::cout<<".0" << "f" <<"\n";
        }
        else
            std::cout << "f" <<"\n";
    }
}

const float &Float_num::getFloat()
{
    return(fl);
}

std::ostream & operator << (std::ostream & out, Float_num & fl)
{
    if (fl.getNum() == -1)
    {
        out << fl.getFloat();
    }
    else
        out << fl.getFloat() << " " << std::to_string(fl.getFloat());
    return(out);
}