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
	return (this->type);
}

void	ATarget::getHitBySpell(const ASpell &usedSpell) const
{
	std::cout << this->type << " has been " << usedSpell.getEffects() << "!\n";
}
