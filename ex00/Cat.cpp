#include "Cat.hpp"

Cat::Cat() : Animal("CAT")
{
	std::cout << "Kitty" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Kitty out..." << std::endl;
}


void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow Meow Meow" << std::endl;
}
