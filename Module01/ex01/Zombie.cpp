#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
	this->m_name = name;
	std::cout << this->m_name << " constructing object..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->m_name << " destructing object..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->m_name = name;
}

Zombie::Zombie() {
}

