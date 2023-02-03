#ifndef CAT_HPP
# define CAT_HPP
# include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
    public:
    WrongCat();
    WrongCat(WrongCat const& other);
    ~WrongCat();
    void makeSound()const;
};

#endif