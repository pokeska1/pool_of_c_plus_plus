
#include "Point.hpp"

int main( void )
{
    Point a(1.2f, 2.2f);
    Point b(4.2f, 5.2f);
    Point c(6.2f, 7.2f);
    Point point (3.3f, 5.0f);

    bsp(a, b, c, point);

    return 0;
}
