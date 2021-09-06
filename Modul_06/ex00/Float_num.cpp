//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Float_num.hpp"

Float_num::Float_num()
{
    name = "Float";
    fl = 0.0;
}

Float_num::Float_num(float const &str, int const &flag) : Needed()
{
    if (flag == 1)
    {
        name = "nanf";
        impossible = false;
        return ;
    }
    else if (flag == 2)
    {
        name = "-inff";
        impossible = false;
        return ;
    }
    else if (flag == 3)
    {
        name = "+inff";
        impossible = false;
        return ;
    }
    this->fl = str;
    impossible = true;
    name = "Float";
}

Float_num::Float_num(std::string const &str, int const &flag) : Needed()
{
   // std::stof(arv)
   int len = str.length();
   if (len > 12)
       len = 11;
   int minus = 1;
   int i;

   if (flag == 1)
   {
       name = "nanf";
       impossible = false;
       return ;
   }
   else if (flag == 2)
   {
       name = "-inff";
       impossible = false;
       return ;
   }
   else if (flag == 3)
   {
       name = "+inff";
       impossible = false;
       return ;
   }


   for(i = 0; i < len && str[i] != '.' && str[i] != 'f'; i++)
   {
       if (str[i] == '-')
       {
           minus = -1;
           continue;
       }
       else if (str[i] == '+')
           continue;
       this->fl = this->fl * 10 + (str[i] - 48);
   }

   float sum = 0;
   int j = 0;
   i++;
   while (i < len && str[i] != '.' && str[i] != 'f')
   {
       sum = sum  * 10 + (str[i] - 48);
       j++;
       i++;
   }
   int ten = 1;
   for (int k = 0; k < j ; k++)
       ten *= 10;

   this->fl += (sum/ ten);

   impossible = true;
   name = "Float";
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
    std::cout << name << " = " << fl << "f" <<"\n";
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