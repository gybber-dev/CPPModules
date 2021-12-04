#include "ClapTrap.hpp"

using std::cout;
using std::endl;

ClapTrap::ClapTrap(const string &mName) {
	cout << "Constructor " << this->m_name << endl;
	this->m_name = mName;
	this->m_attackDamage = 0;
	this->m_hitpoints = 10;
	this->m_energyPoints = 10;
}

ClapTrap::~ClapTrap() {
	cout << "Destructor " << this->m_name << endl;
}

void ClapTrap::attack(const std::string &target) {
	cout << "ClapTrap " << this->m_name << " attack " << target << ", causing " << this->m_attackDamage << " points of damage" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	cout << "ClapTrap " << this->m_name << " took " << amount << " points of damage" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	cout << "ClapTrap " << this->m_name << " repaired " << amount << " points of damage" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	cout << "Copy constructor" << endl;
	this->m_name = "copy_" + src.m_name;
	this->m_attackDamage  = src.m_attackDamage;
	this->m_hitpoints  = src.m_hitpoints;
	this->m_energyPoints  = src.m_energyPoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	cout << "Assignation operator" << endl;
	if (this == &src) {
		return *this;
	}
	this->m_name = src.m_name;
	this->m_attackDamage  = src.m_attackDamage;
	this->m_hitpoints  = src.m_hitpoints;
	this->m_energyPoints  = src.m_energyPoints;
	return *this;
}
