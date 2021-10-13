#include "Zombie.hpp"

void Zombie::announce() {
	std::cout << this->m_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->m_name << " debugging message..." << std::endl;
}

Zombie::Zombie(std::string name) {
	this->m_name = name;
}
