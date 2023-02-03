#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    type = other.type;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << std::endl;
}
void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal sound" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs) 
{
    type = rhs.type;
    return *this;
}