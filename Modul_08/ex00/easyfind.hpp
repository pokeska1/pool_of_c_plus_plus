//
// Created by Jeannetta Marian on 9/7/21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <vector>
#include <iostream>

template<typename T>
typename T::iterator easyfind(T a, int n)
{
    typename T::iterator it_start;
    it_start = a.begin();
    typename T::iterator it_end = a.end();
    while(it_start < it_end)
    {
        if(*it_start == n)
            return(it_start);
        it_start++;
    }
    throw std::logic_error("Don't find");
}

#endif //EX00_EASYFIND_HPP
