

#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen first;
    if (argc != 2)
    {
        if (argc > 2)
            std::cout << "Too many words Karen ! ";
        else
            std::cout << "Why are you silent&?!";
        exit(1);
    }
    first.complain(argv[1]);
    return (0);
}