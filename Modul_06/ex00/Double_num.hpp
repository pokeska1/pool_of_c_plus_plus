//
// Created by Jeannetta Marian on 8/29/21.
//

#ifndef EX00_DOUBLE_NUM_HPP
#define EX00_DOUBLE_NUM_HPP

#include "Needed.hpp"

class Double_num : public Needed {
public:
    Double_num();
    Double_num(std::string const &str, int const &flag);
    Double_num(double const &str, int const &flag);
    ~Double_num();
    Double_num(const Double_num & d);
    void transform();
    const double &getDouble();
};

std::ostream &operator<< (std::ostream &out, Double_num & d);



#endif //EX00_DOUBLE_NUM_HPP
