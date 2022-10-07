#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>

class ASpell;

# include "ASpell.hpp"

class ATarget
{
	public:
		ATarget(){}
		ATarget(std::string const &type) : type(type){}
		ATarget(ATarget const &src){*this = src;}
		ATarget &operator=(ATarget const &src){this->type = src.type; return (*this);}
		virtual ~ATarget(){}
		std::string const &getType() const{return (this->type);}
		virtual ATarget *clone() const = 0;
		void getHitBySpell(ASpell const &spell) const;

	protected:
		std::string type;
};


#endif
