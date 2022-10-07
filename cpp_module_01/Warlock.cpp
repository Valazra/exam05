#include "Warlock.hpp"

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
		array.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void Warlock::forgetSpell(std::string const &spell)
{
	std::map<std::string, ASpell *>::iterator it = array.find(spell);
	if (it != array.end())
		delete it->second;
	array.erase(spell);
}

void Warlock::launchSpell(std::string const &spell, ATarget const &target)
{
	ASpell *temp = array[spell];
	if (temp)
		temp->launch(target);
}
