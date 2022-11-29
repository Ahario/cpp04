#include "Cat.hpp"

Cat::Cat() : Animal("CAT")
{
	std::cout << "Kitty" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Kitty out..." << std::endl;
}

Cat::Cat(Cat& a)
{
	*this = a;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow Meow Meow" << std::endl;
}

Cat &Cat::operator=(Cat& a)
{
	this->type = type;
	return (*this);
}