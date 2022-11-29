#include "Dog.hpp"

Dog::Dog() : Animal("DOG")
{
	std::cout << "Doggo" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Doggo out..." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof Woof Woof Woof" << std::endl;
}

Dog::Dog(Dog& a)
{
	*this = a;
}

Dog &Dog::operator=(Dog& a)
{
	this->type = type;
	return (*this);
}