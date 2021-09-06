//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Double_num.hpp"

Double_num::Double_num(){}
Double_num::Double_num(double const &str, int const &flag) : Needed()
{
    if (flag == 1)
    {
        name = "nan";
        impossible = false;
        return ;
    }
    else if (flag == 2)
    {
        name = "-inf";
        impossible = false;
        return ;
    }
    else if (flag == 3)
    {
        name = "+inf";
        impossible = false;
        return ;
    }
    this->d = str;
    impossible = true;
    name = "Double";
}

Double_num::Double_num(std::string const &str, int const &flag) : Needed()
{
   // d = std::stod(arv);
   int len = str.length();
   double sum = 0;
   int j = 0;
   int minus = 1;
   int i;

   if (flag == 1)
   {
       name = "nan";
       impossible = false;
       return ;
   }
   else if (flag == 2)
   {
       name = "-inf";
       impossible = false;
       return ;
   }
   else if (flag == 3)
   {
       name = "+inf";
       impossible = false;
       return ;
   }
   if (len > 18)
       len = 18;

   for(i = 0; i < len && str[i] != '.' && str[i] != 'f'; i++)
   {
       if (str[i] == '-')
       {
           minus = -1;
           continue;
       }
       else if (str[i] == '+')
           continue;
       this->d = this->d * 10 + (str[i] - 48);
   }
   i++;
   while (i < len && i < 18 && str[i] != '.' && str[i] != 'f')
   {
       sum = sum  * 10 + (str[i] - 48);
       j++;
       i++;
   }
   long int ten = 1;
   for (int k = 0; k < j ; k++)
       ten *= 10;

   this->d += (sum/ ten);

   impossible = true;
   name = "Double";
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
        std::cout << name << " = " << d <<"\n";
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