#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
		array.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
	std::map<std::string, ATarget *>::iterator it = array.find(target);
	if (it != array.end())
		delete it->second;
	array.erase(target);
}

ATarget *TargetGenerator::createTarget(std::string const &target)
{
	std::map<std::string, ATarget *>::iterator it = array.find(target);
	if (it != array.end())
		return (array[target]);
	return (NULL);
}
