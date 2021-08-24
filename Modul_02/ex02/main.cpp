
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed c;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << "max = " <<  Fixed::max( a, b ) << std::endl;
    std::cout << "min = " <<  Fixed::min( a, b ) << std::endl;
    std::cout << "a = " << a << " b = " << b << " c = " << c << std::endl;
    if (a > c)
        std::cout << "a > c" << std::endl;
    if (a < b)
        std::cout << "a < b" << std::endl;
    if (a >= c)
        std::cout << "a >= c" << std::endl;
    if (a <= b)
        std::cout << "a <= b" << std::endl;
    if (a == c)
        std::cout << "a == c" << std::endl;
    else
        std::cout << "now a != c  a = " << a << " c= " << c << std::endl;
    c++;
    ++c;
    if (a == c)
        std::cout << "a == c " << std::endl;
    if (a != b)
        std::cout << "a != b " << a << " b= " << b <<std::endl;
    c++;
    ++c;
    std::cout << c << std::endl;
    std::cout << --c << std::endl;
    std::cout << c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << c << std::endl;
    Fixed const z( Fixed( 20 ) / Fixed( 2 ) );
    std::cout << "20 / 2 = z = " << z << std::endl;
    Fixed const i( Fixed( 10 ) / Fixed( 5 ) );
    std::cout << "10 / 5 = i = " << i << std::endl;
    Fixed const f( Fixed( 12 ) / Fixed( 3 ) );
    std::cout << "12 / 3 = f = " << f << std::endl;
    Fixed const j( Fixed( 5 ) / Fixed( 2 ) );
    std::cout << "5 / 2 = j = " << j << std::endl;
    Fixed const k( Fixed( 7 ) / Fixed( 5 ) );
    std::cout << "7 / 5 = k = " << k << "\t7.0 / 5.0 in float = " << 7.0 / 5.0 << std::endl;
    Fixed const k_plus_j( Fixed( 1.39844f ) + Fixed( 2.5f ) );
    std::cout << "k + j = " << k_plus_j << "\t\t"<< k << " + " << j << " in float = " << 1.39844f + 2.5f << std::endl;
    Fixed const j_minus_k( Fixed( 2.5f ) - Fixed( 1.39844f ) );
    std::cout << "j - k = " << j_minus_k << "\t\t"<< k << " - " << j << " in float = " << 2.5f - 1.39844f<< std::endl;
    Fixed const j_dot_k( Fixed( 2.5f ) * Fixed( 1.39844f ) );
    std::cout << "j * k = " << j_dot_k << "\t\t"<< k << " * " << j << " in float = " << 2.5f * 1.39844f<< std::endl;
    return 0;
}
