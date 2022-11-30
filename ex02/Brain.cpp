#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain in" << std::endl;
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = "Sparking Idea";
	}
}

Brain::~Brain()
{
	std::cout << "Brain out" << std::endl;
}

Brain &Brain::operator=(const Brain& a)
{
	for(int i = 0; i < 100; i++)
	{
		this->ideas[i] = a.ideas[i];
	} 
	return (*this);
}

Brain::Brain(const Brain& a)
{
	*this = a;
}