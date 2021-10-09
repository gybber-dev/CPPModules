#include "Phonebook.hpp"

Phonebook::Phonebook() {
	this->counter = 0;
	this->writeTo = 0;
	this->maxLimit = 8;
}

void Phonebook::showStartMsg() {
	std::cout << WELCOME_MSG << std::endl;
}

void Phonebook::addContact() {
	std::cout << MSG_ADD_NEW_CONTACT << std::endl;
	//	this->contacts[count].setContactInfo(writeTo);
this->contacts[writeTo].setContactDefault(writeTo);
	counter++;
	this->writeTo = this->counter < this->maxLimit
			? this->counter
			: this->counter % this->maxLimit;
	std::cout << this->counter << MSG_CONTACT_SUCCESS_ADDED << std::endl;
}

int Phonebook::_findContact(std::string strIndex) {
	int index;
	int dataSize = this->counter < this->maxLimit ? this->counter : maxLimit;
	index = std::stoi(strIndex);
	if (0 < index && index < dataSize){
		return index;
	}
	return (-1);
}
void Phonebook::_detailedInfoListener() {
	std::string cmd;
	int index;

	while (true) {
		std::cout << "index >: ";
		std::getline(std::cin, cmd);
		index = this->_findContact(cmd);
		if (index != -1) {
			this->contacts[index].showDetailedInfo();
		}
		else {
			std::cout << "Contact '" << cmd << "' was not found" << std::endl;
			break;
		}
	}


}


void Phonebook::searchContact() {
	int dataSize = this->counter < this->maxLimit ? this->counter : maxLimit;
	
	if (this->counter == 0) {
		std::cout << MSG_NO_CONTACTS << std::endl;
	}
	else {
		std::cout << "|===========================================|" << std::endl;
		std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
		std::cout << "|===========================================|" << std::endl;
		for (int i = 0; i < dataSize; ++i) {
			this->contacts[i].showShortInfo(10);
		}
		std::cout << "|===========================================|" << std::endl;
		std::cout << MSG_ENTER_CONTACTS_INDEX << std::endl;
	};
	Phonebook::_detailedInfoListener();
}



