#include "Dog.hpp"

Dog::Dog() : AAnimal("DOG")
{
	std::cout << "Doggo" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Doggo out..." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof Woof Woof Woof" << std::endl;
}

Dog::Dog(const Dog& a)
{
	*this = a;
}

Dog &Dog::operator=(const Dog& a)
{
	this->type = a.type;
	this->brain = new Brain(*(a.brain));
	return (*this);
}
