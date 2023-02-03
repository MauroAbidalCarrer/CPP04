#include "Brain.hpp"
void Brain::copyIdeas(Brain const &other)
{
    const std::string* otherIdeas;
    otherIdeas = other.getIdeas();
    for (int i = 0; i < 100; i++)
        ideas[i] = otherIdeas[i];
}

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}
Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    copyIdeas(other);
}
Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
Brain& Brain::operator=(Brain const &rhs)
{
    copyIdeas(rhs);
    return *this;
}
const std::string* Brain::getIdeas() const
{
    return ideas;
}