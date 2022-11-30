#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
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