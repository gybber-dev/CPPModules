//
// Created by Ysilla Eschallots on 10/16/21.
//

#ifndef CPPMODULES_HUMANA_HPP
#define CPPMODULES_HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {
private:
	std::string m_name;
	Weapon m_weapon;

public:
	HumanA();
	HumanA(std::string name, Weapon weapon);
	~HumanA();
	void attack();
};
#endif
