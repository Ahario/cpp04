#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal{
	public:
		AAnimal(void);
		virtual ~AAnimal(void) = 0;
		AAnimal(const std::string name);
		AAnimal &operator=(const AAnimal& a);
		AAnimal(const AAnimal& a);
		void setAnimalType(std::string name);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif