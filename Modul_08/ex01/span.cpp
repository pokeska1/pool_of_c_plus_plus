//
// Created by Jeannetta Marian on 9/9/21.
//

#include "span.hpp"

Span::Span(void)
{
    size = 0;
}

Span::Span(unsigned int N)
{
    size = N;
}

Span::~Span()
{

}

void Span::addNumber(unsigned int N)
{
    int iter = arr.size();
    if (size <= static_cast<unsigned int>(iter))
        throw std::logic_error("ERROR: SEGA lolzz");
    arr.push_back(static_cast<int>(N));
}

int Span::shortestSpan(void)
{
    int shorts = 2147483647;
    int sum = 0;
    for (int i = 0; i < static_cast<int>(size) - 1; i++)
    {
        for (int j = i + 1; j < static_cast<int>(size); j++)
        {
            sum = arr[i] - arr[j];
            if (sum < 0)
                sum *= -1;
            if(sum < shorts)
                shorts = sum ;
        }
    }
    return(shorts);
}

int Span::longestSpan(void)
{

    std::vector<int>::iterator itb = arr.begin();
    std::vector<int>::iterator ite = arr.end();
    std::sort(itb, ite);
    int sum = arr[size - 1] - arr[0];
    return(sum);
}
