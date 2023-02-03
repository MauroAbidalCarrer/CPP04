#include "Dog.hpp"


Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other)
{
    type = other.type;
    std::cout << "Dog copy consstructor called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "waouf" << std::endl;
}