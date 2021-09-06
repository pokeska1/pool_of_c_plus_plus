//
// Created by Jeannetta Marian on 8/29/21.
//

#include "Char_sing.hpp"

Char_sing::Char_sing(){
    chr = static_cast<char>(0);
    name = "Char";
    num = -1;
}

Char_sing::Char_sing(std::string const &str, int const &flag) : Needed()
{
    int len = str.length();
    int mimic = 0;
    int minus = 1;
    if (flag)
    {
        this->chr = 0;
        name = "impossible";
        num = -1;
        return ;
    }
    for(int i = 0; i < len && str[i] != '.' && str[i] != 'f'; i++)
    {
        if((i == 0 && (str[i] == '+' || str[i] == '-')))
        {
            if (str[i] == '-')
                minus = -1;
            continue;
        }
        mimic = mimic * 10 + str[i] - 48;
    }
    char chr = static_cast<char>(mimic);
    this->chr = chr;
    if (chr <= 31 || chr >= 127 || minus == -1)
    {
        name = "Non displayable";
        num = -1;
    }
    else
    {
        name = "Char";
        num = 1;
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