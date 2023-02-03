#include "Cat.hpp"

Cat::Cat(): Animal()
{
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(Cat const& other) : Animal(other)
{
    type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "miaoooooooooooooooou" << std::endl;
}