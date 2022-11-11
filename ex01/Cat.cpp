#include "Cat.hpp"

Cat::Cat() : Animal("CAT")
{
	std::cout << "Kitty" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Kitty out..." << std::endl;
	delete brain;
}


void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow Meow Meow" << std::endl;
}
