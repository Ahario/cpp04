#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat& a);
		Cat &operator=(const Cat& a);
		void makeSound(void) const;
	private:
		Brain *brain;
};

#endif