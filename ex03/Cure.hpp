#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class Cure : public AMateria, public IMateriaSource{
	protected:
		std::string name;
	public:
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif