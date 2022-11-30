#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Hello Animal!" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "Bye Bye Animal..." << std::endl;
}

AAnimal::AAnimal(std::string name)
{
	type = name;
}

void AAnimal::setAnimalType(std::string name)
{
	this->type = name;
}

AAnimal::AAnimal(const AAnimal& a)
{
	*this = a;
}

void AAnimal::makeSound(void) const
{
	std::cout << "What kind of animal is this" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}

AAnimal &AAnimal::operator=(const AAnimal& a)
{
	this->type = a.type;
	return (*this);
}