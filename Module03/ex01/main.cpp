#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap a("Alpha");
	ScavTrap b("Omega");
	ScavTrap c(b);
	a.print();
	a.attack("aim");
	a.takeDamage(10);
	a.beRepaired(20);
	b.print();
	b.attack("aim2");
	b.takeDamage(100);
	b.beRepaired(200);
	b.guardGate();

}