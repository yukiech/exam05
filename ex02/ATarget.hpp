#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string	type;
		ATarget();
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
	public:
		virtual	~ATarget();
		ATarget(const std::string &type);
		const std::string	&getType() const;
		void	getHitBySpell(const ASpell &spell) const;
		virtual ATarget *clone() const = 0;
};
