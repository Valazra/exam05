#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>

class ATarget;

# include "ATarget.hpp"

class ASpell
{
	public:
		ASpell(){}
		ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects){}
		ASpell(ASpell const &src){*this = src;}
		ASpell &operator=(ASpell const &src){this->name = src.name; this->effects = src.effects; return (*this);}
		virtual ~ASpell(){}
		std::string const &getName() const{return (this->name);}
		std::string const &getEffects() const{return (this->effects);}
		void launch(ATarget const &target) const;
		virtual ASpell *clone() const = 0;

	protected:
		std::string name;
		std::string effects;
};

#endif
