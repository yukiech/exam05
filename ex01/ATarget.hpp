#pragma once

#include <iostream>
#include <vector>

#include "ASpell.hpp"

class ASpell;

class	ATarget
{
	private:
		std::string type;
		ATarget();
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
	public:
		ATarget(const std::string &type);
		virtual	~ATarget();
		const	std::string	&getType() const;
		virtual	ATarget *clone() const = 0;
		void	getHitBySpell(const ASpell &usedSpell) const;
};
