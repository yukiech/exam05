#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
	std::string name;
	std::string title;
	std::vector<ASpell *> spells;
		
	Warlock();
	Warlock(const Warlock &to_copy);
	void operator=(const Warlock &to_copy);

public:
	Warlock(std::string n, std::string t);
	~Warlock();

	const std::string &getName() const;
	const std::string &getTitle() const;
	void setTitle(const std::string &title);	
	void introduce() const;

	void learnSpell(ASpell *newSpell);
	void forgetSpell(std::string oldSpell);
	void launchSpell(std::string spell, ATarget &target);
};
