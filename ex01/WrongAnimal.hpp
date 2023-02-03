#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include<iostream>
#include<string>
class WrongAnimal
{
    protected:
    std::string type;

    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& other);
    ~WrongAnimal();
    void makeSound();
    WrongAnimal &operator=(WrongAnimal const &rhs);
};

#endif