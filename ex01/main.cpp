#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int	i;
	const Animal *zoo[10];
	for(i = 0; i < 5; i++)
	{
		zoo[i] = new Dog();
	}
	for(i = 5; i < 10; i++)
	{
		zoo[i] = new Cat();
	}
	for(i = 0; i < 5; i++)
	{
		zoo[i]->getType();
		zoo[i]->makeSound();
	}
	for(i = 5; i < 10; i++)
	{
		zoo[i]->getType();
		zoo[i]->makeSound();
	}
	for(i = 0; i < 10; i++)
	{
		delete zoo[i];
	}
}