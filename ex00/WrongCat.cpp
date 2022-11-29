#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WRONGCAT")
{
	std::cout << "WrongKitty" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongKitty out..." << std::endl;
}


void WrongCat::makeSound() const
{
	std::cout << "WrongMeow WrongMeow WrongMeow WrongMeow WrongMeow" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat& a)
{
	this->type = a.type;
	return (*this);
}

WrongCat::WrongCat(WrongCat& a)
{
	*this = a;
}
