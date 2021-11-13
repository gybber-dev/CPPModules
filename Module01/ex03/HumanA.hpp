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

	const std::string m_name;
	const Weapon &m_weapon;

public:
	HumanA(const std::string &name, const Weapon &weapon);
	~HumanA();
	void attack() const;
};

#endif
