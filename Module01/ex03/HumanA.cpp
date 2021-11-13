//
// Created by Ysilla Eschallots on 10/16/21.
//
#include "HumanA.hpp"

void HumanA::attack() const {
	std::cout << this->m_name << " attacks with his " << this->m_weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, const Weapon &weapon) : m_name(name), m_weapon(weapon){

}

HumanA::~HumanA() {

}

