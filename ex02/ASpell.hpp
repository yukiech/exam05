#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string	name;
		std::string	effects;
		ASpell();
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &other);
	public:
		virtual	~ASpell();
		ASpell(const std::string &name, const std::string &effects);
		const std::string	&getName() const;
		const std::string	&getEffects() const;
		void	launch(const ATarget &toHit) const;
};
