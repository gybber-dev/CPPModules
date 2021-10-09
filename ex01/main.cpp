#include "Phonebook.hpp"

int main()
{
	bool isRunning;
	std::string cmd;
	Phonebook book;

	isRunning = true;

	while (isRunning)
	{
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
			isRunning = false;
	}

}