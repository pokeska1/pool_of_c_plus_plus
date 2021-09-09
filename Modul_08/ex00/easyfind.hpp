//
// Created by Jeannetta Marian on 9/7/21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <array>

template<typename T>
void easyfind(T &a, int n)
{
    int *p;
   p = std::find(a, n);
   if (*p != n)
       throw std::logic_error ("Don't find");
   std::cout << "Yes!\n";

//    for(int i = 0; i < static_cast<int>(sizeof(a)); i++)
//        if (a[i] == n)
//            return 1;
//
}

#endif //EX00_EASYFIND_HPP
