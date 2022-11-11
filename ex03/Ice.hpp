#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class Ice : public AMateria, public IMateriaSource{
	protected:
		std::string name;
	public:
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif