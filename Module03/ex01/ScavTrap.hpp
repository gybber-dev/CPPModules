//
// Created by OUT-Faezov-AF on 04.12.2021.
//

#ifndef CPPMODULES_SCAVTRAP_HPP
#define CPPMODULES_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
	ScavTrap(const string &name);
	~ScavTrap();
	void guardGate();
};


#endif //CPPMODULES_SCAVTRAP_HPP
