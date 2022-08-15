#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	private:
		std::vector<ATarget *>	target;
		TargetGenerator(const TargetGenerator &other);
		TargetGenerator &operator=(const TargetGenerator &other);
		TargetGenerator(const std::string &type);
	public:
		TargetGenerator();
		~TargetGenerator();
		void    learnTargetType(ATarget *newTarget);
                void    forgetTargetType(const std::string &oldTarget);
                ATarget	*createTarget(const std::string &usedTarget);
		
};
