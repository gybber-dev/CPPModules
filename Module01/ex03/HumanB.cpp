//
// Created by Ysilla Eschallots on 10/16/21.
//

#include "HumanB.hpp"

HumanB::~HumanB() {
}

HumanB::HumanB() {
}

void HumanB::attack() {
	if (this->m_weapon != nullptr) {
		std::cout << this->m_name << " attacks with his " << this->m_weapon->getType() << std::endl;
	}
}

void HumanB::setWeapon(const Weapon &weapon) {
	this->m_weapon = &weapon;
}

HumanB::HumanB(const std::string &name) {
	this->m_name = name;
	this->m_weapon = nullptr;
}

