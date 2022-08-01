#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": Coucou\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": ByeBye\n";
}

const std::string	&Warlock::getName() const
{
	return(this->name);
}

const std::string	&Warlock::getTitle() const
{
	return(this->title);
}

void	Warlock::setTitle(const std::string &title)
{
	this->title = title;
}

void	Warlock::introduce() const
{
	std::cout << this->name << " - " << this->title << std::endl;
}
