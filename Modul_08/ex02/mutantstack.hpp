//
// Created by Jeannetta Marian on 9/10/21.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <vector>

template<class T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(){
        return(this->c.begin());
    }
    iterator end(){
        return(this->c.end());
    }
};


#endif //EX02_MUTANTSTACK_HPP
