//
// Created by Ysilla Eschallots on 10/16/21.
//

#include <string>
#include "Weapon.hpp"

const std::string & Weapon::getType() const {
	return this->m_type;
}

void Weapon::setType(const std::string &type) {
	this->m_type = type;
}

Weapon::Weapon() {
}

Weapon::~Weapon() {
}

Weapon::Weapon(std::string const & type) {
	this->m_type = type;
}
