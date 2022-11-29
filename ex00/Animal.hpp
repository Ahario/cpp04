#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(std::string name);
		Animal &operator=(Animal& a);
		Animal(Animal& a);
		void setAnimalType(std::string name);
		virtual void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif