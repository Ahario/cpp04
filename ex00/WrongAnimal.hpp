#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(std::string name);
		void setAnimalType(std::string name);
		void makeSound(void) const;
		std::string getType(void) const;
		WrongAnimal &operator=(WrongAnimal& a);
		WrongAnimal(WrongAnimal& a);
	protected:
		std::string type;
};

#endif