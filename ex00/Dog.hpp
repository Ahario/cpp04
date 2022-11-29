#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	public:
		Dog(void);
		~Dog(void);
		Dog &operator=(Dog& a);
		Dog(Dog& a);
		void makeSound(void) const;
};

#endif