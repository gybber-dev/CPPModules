#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap a("Alpha");
	ScavTrap b("Omega");
	FragTrap c;
	a.print();
	a.attack("aim");
	a.takeDamage(10);
	a.beRepaired(20);
	b.print();
	b.attack("aim2");
	b.takeDamage(100);
	b.beRepaired(200);
	b.guardGate();
	c.print();
	c.attack("aim2");
	c.takeDamage(100);
	c.beRepaired(200);
	c.highFivesGuys();
}