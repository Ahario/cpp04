#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	public:
		Animal(void);
		virtual ~Animal(void) = 0;
		Animal(const std::string name);
		Animal &operator=(const Animal& a);
		Animal(const Animal& a);
		void setAnimalType(std::string name);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif