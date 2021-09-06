//
// Created by Jeannetta Marian on 9/6/21.
//

#include "Data.hpp"

Data::Data() : num(12), f_num(42.3) ,flag(true)
{
    arr[0] = "l";
    arr[1] = "0";
    arr[2] = "lzzzz";
}

Data::Data(Data const &dat)
{
    num = dat.num;
    f_num = dat.f_num;
    flag = dat.flag;
    arr[0] = dat.arr[0];
    arr[1] = dat.arr[1];
    arr[2] = dat.arr[2];
}

Data::~Data()
{
    std::cout << "Destructor" << "\n";
}

Data const &Data::operator=(Data const &dat){

    num = dat.num;
    f_num = dat.f_num;
    flag = dat.flag;
    arr[0] = dat.arr[0];
    arr[1] = dat.arr[1];
    arr[2] = dat.arr[2];
    return (*this);
}

int  &Data::get_Num()
{
    return num;
}

float  &Data::get_FNum()
{
    return (f_num);
}

std::string  &Data::get_arr(int n)
{
    return (arr[n]);
}

bool  &Data::get_flag()
{
    return(flag);
}

std::ostream &operator<<(std::ostream & out, Data & dat)
{
    out << "Num = ";
    out << dat.get_Num();
    out << "\nFloat = ";
    out << dat.get_FNum();
    out << "\nArr = ";
    out << dat.get_arr(0);
    out << dat.get_arr(1);
    out << dat.get_arr(2);
    out << "\nBool = ";
    out << dat.get_flag();
   return(out);
}