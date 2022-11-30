#include "Cat.hpp"

Cat::Cat() : AAnimal("CAT")
{
	std::cout << "Kitty" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Kitty out..." << std::endl;
}

Cat::Cat(const Cat& a)
{
	*this = a;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow Meow Meow Meow" << std::endl;
}

Cat &Cat::operator=(const Cat& a)
{
	this->type = a.type;
	return (*this);
}
