//
// Created by OUT-Faezov-AF on 05.12.2021.
//

#ifndef CPPMODULES_FRAGTRAP_HPP
#define CPPMODULES_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap();
	FragTrap(const string &name);
	~FragTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};


#endif //CPPMODULES_FRAGTRAP_HPP
