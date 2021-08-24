//
// Created by Jeannetta Marian on 8/21/21.
//

#ifndef EX03_POINT_HPP
#define EX03_POINT_HPP

#include "Fixed.hpp"

class Point {
public:
    Point();
    Point(const Point &old);
    Point(const float f, const float s);
    Point &operator=(const Point &old);
    ~Point();
private:
    Fixed const x;
    Fixed const y;
    Fixed const z;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif //EX03_POINT_HPP
