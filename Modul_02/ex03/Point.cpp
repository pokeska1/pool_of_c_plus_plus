//
// Created by Jeannetta Marian on 8/21/21.
//

#include "Point.hpp"

Point::ft()
{

}

Point::Point()
{
    x = 0;
    y = 0;
}

Point::Point(const Point &old)
{
    this->x = old.x;
    this->y = old.y;
}

Point::Point(const float f, const float s)
{
    x = f;
    y = s;

}
Point &Point::operator=(const Point &old)
{
    Point *temp;

    temp.x = old.x;
    temp.y = old.y;
    return (temp);
}

Point::~Point()
{

}