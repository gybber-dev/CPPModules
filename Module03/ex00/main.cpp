#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Alpha");
	ClapTrap copy_a(a);
	ClapTrap b("Omega");
	b.attack("something");
	a.takeDamage(3);
	copy_a.beRepaired(5);
	return 0;
}