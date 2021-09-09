//
// Created by Jeannetta Marian on 9/6/21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

template <typename T>void iter(T const *ptr, int len, void (*f)(T const &arr))
{
    for(int i = 0; i < len; i++)
        f(ptr[i]);
}

#endif //EX01_ITER_HPP
