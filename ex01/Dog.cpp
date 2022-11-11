#include "Dog.hpp"

Dog::Dog() : Animal("DOG")
{
	std::cout << "Doggo" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Doggo out..." << std::endl;
	delete brain;
}


void Dog::makeSound() const
{
	std::cout << "Woof Woof Woof Woof Woof" << std::endl;
}