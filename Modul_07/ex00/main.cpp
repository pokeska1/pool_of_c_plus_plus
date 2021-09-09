#include <iostream>
#include "whatever.hpp"

class Awesome {
public:
    Awesome(int n) : _n(n){}
    bool operator==(Awesome const & rhs) const {return(this->_n==rhs._n);}
    bool operator!=(Awesome const & rhs) const {return(this->_n!=rhs._n);}
    bool operator>(Awesome const & rhs) const {return(this->_n>rhs._n);}
    bool operator<(Awesome const & rhs) const {return(this->_n<rhs._n);}
    bool operator>=(Awesome const & rhs) const {return(this->_n>=rhs._n);}
    bool operator<=(Awesome const & rhs) const {return(this->_n<=rhs._n);}
    int const &getNum(){return(this->_n);}
private:
    int _n;
};
std::ostream &operator<<(std::ostream & out, Awesome & ar)
{
    out << ar.getNum();
    return(out);
}


int main()
{
    int a = 2;
    int b = 3;
    int z(10);
    ::swap( a, b );
    std::cout << z << '\n';
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


    Awesome aclass(5);
    Awesome bclass(12);
    std::cout << "aclass = " << aclass << ", bclass = " << bclass << std::endl;
    ::swap( aclass, bclass );
    std::cout << "aclass = " << aclass << ", bclass = " << bclass << std::endl;
    std::cout << "min( aclass, bclass ) = " << ::min( aclass, bclass ) << std::endl;
    std::cout << "max( bclass, bclass ) = " << ::max( aclass, bclass ) << std::endl;
    return 0;
}
