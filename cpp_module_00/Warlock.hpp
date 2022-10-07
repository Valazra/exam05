#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const &title) : name(name), title(title)
		{
			std::cout << this->name << ": This looks like another boring day." << std::endl;
		}
		~Warlock()
		{
			std::cout << this->name << ": My job here is done!" << std::endl;
		}
		std::string const &getName() const{return (this->name);}
		std::string const &getTitle() const{return (this->title);}
		void setTitle(std::string const &title){this->title = title;}
		void introduce() const
		{
			std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
		}

	private:
		std::string name;
		std::string title;
		Warlock(){}
		Warlock(Warlock const &src){*this = src;}
		Warlock &operator=(Warlock const &src){this->name = src.name; this->title = src.title; return (*this);}
};

#endif
