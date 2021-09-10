

#include "span.hpp"

#define NUM_ARR 10

int main() {
    try{
        Span sp = Span(NUM_ARR);
        srand(time(NULL));
        int j = -1;
        for (int i = 0; i < NUM_ARR; i++)
        {
            j++;
            int value = rand();
            value = value % 100;
            //value = value % 4;
            if (j != 15)
            {
                std::cout << value << " ";
            }
            else
            {
                std::cout << value << '\n';
                j = -1;
            }
            sp.addNumber(value);
        }
        std::cout << '\n';
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &er)
    {
        std::cout << er.what()<< std::endl;
    }
    return 0;
}
