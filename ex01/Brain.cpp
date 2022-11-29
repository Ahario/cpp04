#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain in" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain out" << std::endl;
}

Brain &Brain::operator=(Brain& a)
{
	return (*this);
}

Brain::Brain(Brain& a)
{
	*this = a;
}