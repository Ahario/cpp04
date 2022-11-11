#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Hello Animal!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Bye Bye Animal..." << std::endl;
}

Animal::Animal(std::string name)
{
	type = name;
}

void Animal::setAnimalType(std::string name)
{
	this->type = name;
}

void Animal::makeSound(void) const
{
	std::cout << "What kind of animal is this" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

