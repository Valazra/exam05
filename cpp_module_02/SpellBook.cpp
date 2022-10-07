#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
		array.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void SpellBook::forgetSpell(std::string const &spell)
{
	std::map<std::string, ASpell *>::iterator it = array.find(spell);
	if (it != array.end())
		delete it->second;
	array.erase(spell);
}

ASpell *SpellBook::createSpell(std::string const &spell)
{
	std::map<std::string, ASpell *>::iterator it = array.find(spell);
	if (it != array.end())
		return (array[spell]);
	return (NULL);
}
