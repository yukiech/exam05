#include "TargetGenerator.hpp"
//#include "ATarget.hpp"

TargetGenerator::TargetGenerator()
{

}

TargetGenerator::~TargetGenerator()
{

}

void    TargetGenerator::learnTargetType(ATarget *newTarget)
{
        std::vector<ATarget *>::iterator i;

        i = this->target.begin();
        while(i != this->target.end())
        {
                if ((*i)->getType() == newTarget->getType())
                        return ;
                i++;
        }
        this->target.push_back(newTarget->clone());
}


void    TargetGenerator::forgetTargetType(const std::string &oldTarget)
{
        std::vector<ATarget *>::iterator i;

        i = this->target.begin();
        while(i != this->target.end())
        {
                if ((*i)->getType() == oldTarget)
                {
                        this->target.erase(i);
                        return ;
                }
                i++;
        }

}

ATarget	*TargetGenerator::createTarget(const std::string &usedTarget)
{
        std::vector<ATarget *>::iterator i;

        i = this->target.begin();
        while(i != this->target.end())
        {
                if ((*i)->getType() == usedTarget)
                {
                        return (*i);
                }
                i++;
        }
	return (NULL);
}
