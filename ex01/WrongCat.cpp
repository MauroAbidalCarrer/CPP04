#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::WrongCat(WrongCat const& other) : WrongAnimal(other)
{
    type = other.type;
    std::cout << "WrongCat copy constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "miaoooooooooooooooou" << std::endl;
}