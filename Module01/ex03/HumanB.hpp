//
// Created by Ysilla Eschallots on 10/16/21.
//

#ifndef CPPMODULES_HUMANB_HPP
#define CPPMODULES_HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {
private:
	std::string m_name;
	const Weapon *m_weapon;

public:
	HumanB();
	HumanB(std::string const & name);
	~HumanB();
	void setWeapon(const Weapon& weapon);
	void attack();
};

#endif
