//
// Created by Jeannetta Marian on 8/29/21.
//

#ifndef EX00_FLOAT_NUM_HPP
#define EX00_FLOAT_NUM_HPP

#include "Needed.hpp"

class Float_num : public Needed {
public:
    Float_num();
    Float_num(std::string const &str, int const &flag);
    Float_num(float const &str, int const &flag);
    ~Float_num();
    Float_num(const Float_num & fl);
    void transform();
    const float &getFloat();
};

std::ostream &operator<< (std::ostream &out, Float_num & fl);


#endif //EX00_FLOAT_NUM_HPP
