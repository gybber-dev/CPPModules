//
// Created by OUT-Faezov-AF on 04.12.2021.
//

#include "ScavTrap.hpp"
using std::cout;
using std::endl;

void ScavTrap::guardGate() {
	cout << "ScavTrap " << this->m_name << " have enterred in Gate keeper mode" << endl;
}

ScavTrap::ScavTrap(const string &name) : ClapTrap(name) {
	cout << "ScavTrap constructor " << name << endl;
	this->m_name = name;
	this->m_hitpoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	cout << "ScavTrap destructor " << this->m_name << endl;
}
