#include "Dog.hpp"

Dog::Dog(): Animal()
{
    brain = new Brain();
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(Dog const& other) : Animal(other)
{
    *this = other;
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "miaoooooooooooooooou" << std::endl;
}
Brain Dog::getBrain() const
{
    return *brain;
}
Dog& Dog::operator=(const Dog& other)
{
    if (brain != NULL)
        delete brain;
    brain = new Brain(other.getBrain());
    type = other.type;
    return *this;
}