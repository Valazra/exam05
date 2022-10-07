#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include "ASpell.hpp"
# include <map>

class SpellBook
{
	public:
		SpellBook(){}
		~SpellBook()
		{
			std::map<std::string, ASpell *>::iterator it = array.begin();
			while (it != array.end())
			{
				delete it->second;
				it++;
			}
			array.clear();
		}
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spell);
		ASpell *createSpell(std::string const &spell);

	private:
		SpellBook(SpellBook const &src){*this = src;}
		SpellBook &operator=(SpellBook const &src){(void)src; return (*this);}
		std::map<std::string, ASpell *> array;
};

#endif
