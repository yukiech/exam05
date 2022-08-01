#include "Warlock.hpp"

Warlock::Warlock(std::string n, std::string t)
{
	this->name = n;
	this->title = t;
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
	return (name);
}

const std::string &Warlock::getTitle() const
{
	return (title);
}

void Warlock::setTitle(const std::string &t)
{
	this->title = t;
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!"<< std::endl;
}


void	Warlock::learnSpell(ASpell	*newSpell)
{
	std::vector<ASpell *>::iterator	i;

	i = this->spells.begin();
	while (i != this->spells.end())
	{
		if ((*i)->getName() == newSpell->getName())
			return ;
		i++;
	}
	spells.push_back(newSpell);
}

void	Warlock::forgetSpell(std::string oldSpell)
{
	std::vector<ASpell *>::iterator i;

	i = this->spells.begin();
	while (i != this->spells.end())
	{
		if ((*i)->getName() == oldSpell)
		{
			spells.erase(i);
			return ;
		}
		i++;
	}
}


void	Warlock::launchSpell(std::string spell, ATarget &target)
{
	std::vector<ASpell *>::iterator	i;

	i = this->spells.begin();
	while (i != this->spells.end())
	{
		if ((*i)->getName() == spell)
			target.getHitBySpell(**i);
		i++;
	}
}



