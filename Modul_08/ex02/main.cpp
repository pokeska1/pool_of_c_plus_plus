
#include "mutantstack.hpp"

int main() {
    /*
    MutantStack<int> mstack;
//    std::deque<int>::iterator ityt;
    mstack.push(17);
   mstack.push(5);
    std::cout << "mstack.top() = " << mstack.top() << std::endl;
    mstack.pop();
    std::cout<< "mstack.size() = "  << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
*/
    MutantStack<int> mstack;
    //    std::deque<int>::iterator ityt;
    mstack.push(17);
    mstack.push(5);
    std::cout << "mstack.top() = " << mstack.top() << std::endl;
    mstack.pop();
    std::cout<< "mstack.size() = "  << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    return 0;
}