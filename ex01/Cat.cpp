#include "Cat.hpp"

Cat::Cat(): Animal()
{
    brain = new Brain();
    type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(Cat const& other) : Animal(other)
{
    brain = NULL;
    *this = other;
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "miaoooooooooooooooou" << std::endl;
}
Brain Cat::getBrain() const
{
    return *brain;
}
Cat& Cat::operator=(const Cat& other)
{
    if (brain != NULL)
        delete brain;
    brain = new Brain(other.getBrain());
    type = other.type;
    return *this;
}