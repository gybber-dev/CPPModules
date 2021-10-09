#include "Phonebook.hpp"

int main()
{
	bool isRunning;
	std::string cmd;
	Phonebook book;

	isRunning = true;
	book.showStartMsg();
	while (isRunning)
	{
		std::cout << ">: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			book.addContact();
		else if (cmd == "SEARCH")
			book.searchContact();
		else if (cmd == "EXIT")
			isRunning = false;
	}
}