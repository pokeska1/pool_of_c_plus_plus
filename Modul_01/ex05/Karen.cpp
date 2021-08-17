
#include "Karen.hpp"

typedef void(Karen::*ptr_to_function)(void);

// тип функции (*имя функции)(спецификация параметров);
void Karen::complain(std::string level)
{


    int i;
    i = level.compare("DEBUG");
    switch(i)
    {
        case 0:
        {
            ptr_to_function ptr = &Karen::debug;
            (this->*ptr)();
        }
    }
    switch(level.compare("INFO"))
    {
        case 0:
        {
            ptr_to_function ptr = &Karen::info;
            (this->*ptr)();
        }
    }
    switch(level.compare("WARNING"))
    {
        case 0:
        {
            ptr_to_function ptr = &Karen::warning;
            (this->*ptr)();
        }
    }
    switch(level.compare("ERROR"))
    {
        case 0:
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
