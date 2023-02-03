#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    type = other.type;
}
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &rhs)
{
    type = rhs.getType();
    return *this;
}
std::string Animal::getType() const
{
    return type;
}