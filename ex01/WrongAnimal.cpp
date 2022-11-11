#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Hello WrongAnimal!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Bye Bye WrongAnimal..." << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
	type = name;
}

void WrongAnimal::setAnimalType(std::string name)
{
	this->type = name;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "This is WrongAnimal sound " << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

