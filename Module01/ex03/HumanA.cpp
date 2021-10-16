//
// Created by Ysilla Eschallots on 10/16/21.
//
#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << this->m_name << " attacks with his " << this->m_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon weapon) {

}

