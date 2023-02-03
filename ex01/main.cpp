#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // Animal* animals [6];
    // for (int i = 0; i < 6; i++)
    // {
    //     animals[i] = new Cat();
    //     animals[i + 3] = new Dog();
    // }

    // for (int i = 0; i < 6; i++)
    // {
    //     animals[i]->makeSound();
    //     delete animals[i];
    // }
	Cat cat;
	Cat catCopy(cat);
	Dog dog;
	Dog dogCopy = dog;
	
	// std::cout << "\n\n---------DEEP TEST II ---------\n\n" << std::endl;
	// Dog *dog2 = new Dog();
	// Dog *dogCopy2 = new Dog(*dog2);
	// delete dog2;
	// delete dogCopy2;
}