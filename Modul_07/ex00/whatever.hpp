//
// Created by Jeannetta Marian on 9/6/21.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template <class T>
void swap(T &a, T &b)
{
    T c(a);
    c = a;
    a = b;
    b = c;
}

template <typename T>
T &min(T &a, T &b)
{
   if ( a < b)
       return a;
   else
       return b;
}

template <typename T>
T &max(T &a, T &b)
{
    if ( a > b)
        return a;
    else
        return b;
}

#endif //EX00_WHATEVER_HPP
