//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Char_sing.hpp"

Char_sing::Char_sing(){
    chr = static_cast<char>(0);
    name = "Char";
    num = -1;
}

Char_sing::Char_sing(std::string const &str) : Needed()
{
    try
    {
        if (!checker(str))
            throw(1);
        int mimic = std::stoi(str);
        if (!mimic || mimic < 0 || mimic > 128)
        {
            name = "impossible";
            num = -1;
            return ;
        }
        if ((mimic >= 0 && mimic <= 31) || mimic == 127 || mimic == 128)
        {
            name = "Non displayable";
            num = -1;
        }
        else
        {
            name = "Char";
            num = 1;

            char chr = static_cast<char>(mimic);
            this->chr = chr;
        }
    }
    catch(...)
    {
        name = "impossible";
        num = -1;
        return ;
    }
}

Char_sing::~Char_sing(){}

Char_sing::Char_sing(const Char_sing & chr) : Needed(){
    this->chr = chr.chr;
    this->name = name;
}

void Char_sing::transform()
{
    if (num == -1)
    {
        std::cout << "char = " << name << "\n";
    }
    else
    {
        std::cout << "char = '" << chr << "'" <<"\n";
    }
}

const char &Char_sing::getChar()
{
    return(this->chr);
}

std::ostream & operator << (std::ostream & out, Char_sing & chr)
{
    if (chr.getNum() == -1)
    {
        out << chr.getName();
    }
    else
        out << chr.getName() << " " << std::to_string(chr.getChar());
    return(out);
}