#include "AMateria.hpp"

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

std::string const& AMateria::getType() const
{
	return(type);
}

AMateria* AMateria::clone() const
{
}

void AMateria::use(ICharacter& target)
{
}

