//
// Created by Jeannetta Marian on 9/9/21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <vector>
#include <iostream>

class Span {
private:
    std::vector<int> arr;
    unsigned int size;
public:
    Span(void);
    Span(unsigned int N);
    ~Span();
    void addNumber(unsigned int N);

    int shortestSpan(void);
    int longestSpan(void);
};


#endif //EX01_SPAN_HPP
