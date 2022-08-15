//#include "ATarget.hpp"
#include "ATarget.hpp"

ATarget::ATarget(const std::string &type)
{
	this->type = type;
}

ATarget::~ATarget()
{
}

const	std::string	&ATarget::getType() const
{
	return(this->type);
}

void	ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
