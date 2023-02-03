#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
    std::string type;

    public:
    Animal();
    Animal(Animal const &other);
    virtual ~Animal();
    virtual void makeSound()const = 0;
    std::string getType() const;
    Animal &operator=(Animal const &rhs);
};

#endif