#pragma once

#include <iostream>
#include <vector>

#include "SpellBook.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		std::string	name;
		std::string	title;
		SpellBook	spells;
		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
	public:
		~Warlock();
		Warlock(const std::string &name, const std::string &title);
		const std::string	&getName() const;
		const std::string	&getTitle() const;
		void	setTitle(const std::string &title);
		void	introduce() const;
		void	learnSpell(ASpell *newSpell);
		void	forgetSpell(std::string oldSpell);
		void	launchSpell(std::string usedSpell, ATarget &toHit);
};
