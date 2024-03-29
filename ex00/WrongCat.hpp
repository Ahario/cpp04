#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat(void);
		~WrongCat(void);
		void makeSound(void) const;
		WrongCat &operator=(WrongCat& a);
		WrongCat(WrongCat& a);
};

#endif