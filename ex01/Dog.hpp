#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	public:
		Dog(void);
		~Dog(void);
		Dog &operator=(const Dog& a);
		Dog(const Dog& a);
		void makeSound(void) const;
	private:
		Brain* brain;
};

#endif