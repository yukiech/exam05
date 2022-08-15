#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
}

const	std::string	&Warlock::getName() const
{
	return (this->name);
}

const	std::string	&Warlock::getTitle() const
{
	return (this->title);
}

void	Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void    Warlock::learnSpell(ASpell *newSpell)
{
	std::vector<ASpell *>::iterator	i;

	i = this->spells.begin();
	while (i != this->spells.end())
	{
		if ((*i)->getName() == newSpell->getName())
			return ;
		i++;
	}
	this->spells.push_back(newSpell);
}

void    Warlock::forgetSpell(std::string oldSpell)
{
	std::vector<ASpell *>::iterator	i;

	i = this->spells.begin();
	while (i != this->spells.end())
	{
		if ((*i)->getName() == oldSpell)
		{
			this->spells.erase(i);
			return ;
		}
		i++;
	}

}

void    Warlock::launchSpell(std::string usedSpell, ATarget &toHit)
{
	std::vector<ASpell *>::iterator	i;

	i = this->spells.begin();
	while (i != this->spells.end())
	{
		if ((*i)->getName() == usedSpell)
		{
			toHit.getHitBySpell(**i);
			return ;
		}
		i++;
	}

}
