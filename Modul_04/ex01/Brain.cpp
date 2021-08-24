//
// Created by Jeannetta Marian on 8/24/21.
//

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< "Brain constructor" << std::endl;
    ideas = new std::string[100];
}

Brain::~Brain()
{
    delete [] ideas ;
    std::cout<< "Brain destructor" << std::endl;
}

Brain::Brain(const Brain &copy_class)
{
    if (copy_class.ideas)
    {
        for( int i = 0; i < 100 ; i++)
            this->ideas[i] = copy_class.ideas[i];
    }
    std::cout<< "Brain copy-constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &copy_class)
{
    delete this->ideas;
    std::cout<< "Brain Assignation operator" << std::endl;
    if (copy_class.ideas)
    {
        for( int i = 0; i < 100 ; i++)
            this->ideas[i] = copy_class.ideas[i];
    }
    return(*this);
}
void Brain::setIdea(int i)
{
    this->ideas[i] = "animal ";
}

