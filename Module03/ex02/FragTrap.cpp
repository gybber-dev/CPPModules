//
// Created by OUT-Faezov-AF on 05.12.2021.
//

#include "FragTrap.hpp"
using std::cout;
using std::endl;

FragTrap::FragTrap() {
	cout << "FragTrap's default constructor " << endl;
	this->m_name = "default name";
	this->m_hitpoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
}

FragTrap::~FragTrap() {
	cout << "FragTrap destructor " << this->m_name << endl;
}

FragTrap::FragTrap(const string &mName) {
	cout << "FragTrap constructor " << mName << endl;
	this->m_name = mName;
	this->m_hitpoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
}

void FragTrap::highFivesGuys(void) {
	cout << "a positive high fives request. WTF?" << endl;
}

void FragTrap::attack(const std::string &target) {
	cout << "FragTrap " << this->m_name << " attack " << target << ", causing " << this->m_attackDamage << " points of damage" << endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	cout << "FragTrap " << this->m_name << " took " << amount << " points of damage" << endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	cout << "FragTrap " << this->m_name << " repaired " << amount << " points of damage" << endl;
}
