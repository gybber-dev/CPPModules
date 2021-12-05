//
// Created by OUT-Faezov-AF on 04.12.2021.
//

#ifndef CPPMODULES_SCAVTRAP_HPP
#define CPPMODULES_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const string &name);
	~ScavTrap();
	void guardGate();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPPMODULES_SCAVTRAP_HPP
