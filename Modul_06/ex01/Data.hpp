//
// Created by Jeannetta Marian on 9/6/21.
//

#ifndef EX01_DATA_HPP
#define EX01_DATA_HPP
#include <iostream>

class Data {
public:
    Data();
    Data(Data const &dat);
    ~Data();
    Data const &operator=(Data const &dat);
    int  &get_Num();
    float  &get_FNum();
    std::string  &get_arr(int n);
    bool  &get_flag();
private:
    int num;
    float f_num;
    std::string arr[3];
    bool flag;
};

std::ostream &operator<<(std::ostream &out, Data &dat);

#endif //EX01_DATA_HPP
