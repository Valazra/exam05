#include "Warlock.hpp"

void Warlock::learnSpell(ASpell *spell)
{
	book.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &spell)
{
	book.forgetSpell(spell);
}

void Warlock::launchSpell(std::string const &spell, ATarget const &target)
{
	ASpell *temp = book.createSpell(spell);
	if (temp)
		temp->launch(target);
}
