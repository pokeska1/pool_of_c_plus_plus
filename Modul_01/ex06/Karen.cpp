
#include "Karen.hpp"

std::string D = "DEBUG";
std::string I = "INFO";
std::string W = "WARNING";
std::string E = "ERROR";

typedef void(Karen::*ptr_to_function)(void);

// тип функции (*имя функции)(спецификация параметров);
void Karen::complain(std::string level)
{
    std::string str[5];
    str[0] = "DEBUG";
    str[1] = "INFO";
    str[2] = "WARNING";
    str[3] = "ERROR";
    str[4] = "df%fG52s\t";
    int i;
    int j;

    i = 5;
    j = 0;
    while (j != 5 && i != 0)
    {
        i = level.compare(str[j]);
        j++;
    }

  j--;
    switch(j)
    {
        case 0:
        {
            ptr_to_function ptr = &Karen::debug;
            (this->*ptr)();
        }
        case 1:
        {
            ptr_to_function ptr = &Karen::info;
            (this->*ptr)();
        }
        case 2:
        {
            ptr_to_function ptr = &Karen::warning;
            (this->*ptr)();
        }
        case 3:
        {
            ptr_to_function ptr = &Karen::error;
            (this->*ptr)();
        }
    }
}

void Karen::debug( void )
{

    std::cout << "DEBUG I love to get extra bacon for my "
    << "7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
    std::cout   << "INFO I cannot believe adding extra bacon cost more money. "
                <<  "You don’t put enough! If you did I would not have to ask for it!"
                << std::endl;
}

void Karen::warning( void )
{
    std::cout   << "WARNING I think I deserve to have some extra bacon for free. I’ve been"
                << "coming here for years and you just started working here last month."
                << std::endl;
}

void Karen::error( void )
{
    std::cout   << "ERROR This is unacceptable, I want to speak to the manager now." << std::endl;
}
