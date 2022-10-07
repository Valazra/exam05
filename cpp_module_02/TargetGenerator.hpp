#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <map>

class TargetGenerator
{
	public:
		TargetGenerator(){}
		~TargetGenerator()
		{
			std::map<std::string, ATarget *>::iterator it = array.begin();
			while (it != array.end())
			{
				delete it->second;
				it++;
			}
			array.clear();
		}
		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &target);
		ATarget *createTarget(std::string const &target);

	private:
		TargetGenerator(TargetGenerator const &src){*this = src;}
		TargetGenerator &operator=(TargetGenerator const &src){(void)src; return (*this);}
		std::map<std::string, ATarget *> array;
};

#endif
