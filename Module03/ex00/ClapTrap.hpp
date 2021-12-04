//
// Created by OUT-Faezov-AF on 04.12.2021.
//

#ifndef CPPMODULES_CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::string;

class ClapTrap {
public:
	ClapTrap(const string &mName);
	~ClapTrap();
	ClapTrap(const ClapTrap &src);
	ClapTrap &operator= (const ClapTrap &src);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	string	m_name;
	int		m_hitpoints;
	int		m_energyPoints;
	int		m_attackDamage;


};

#define CPPMODULES_CLAPTRAP_HPP

#endif //CPPMODULES_CLAPTRAP_HPP
