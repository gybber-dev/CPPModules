#include "Zombie.hpp"

int main()
{
	Zombie *zombie1;

	zombie1 = newZombie("Black");
	zombie1->announce();
	delete zombie1;
	randomChump("Jack");
	return 0;
}