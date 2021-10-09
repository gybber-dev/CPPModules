#include "Contact.hpp"

Contact::Contact() {
	this->dataNames[CONTACT_INDEX] = "index";
	this->dataNames[CONTACT_FIRST_NAME] = "First name";
	this->dataNames[CONTACT_LAST_NAME] = "Last name";
	this->dataNames[CONTACT_NICK_NAME] = "Nick name";
	this->dataNames[CONTACT_NUMBER] = "Phone number";
	this->dataNames[CONTACT_SECRET] = "Secret";
}

void Contact::setContactInfo(int index) {
	this->data[CONTACT_INDEX] = std::to_string(index);
	int dataSize = sizeof(this->data) / sizeof(this->data[0]);
	for (int i = 1; i < dataSize; ++i) {
		std::cout << "Enter " << this->dataNames[i] << " >: ";
		std::getline(std::cin, this->data[i]);
	}
}

void Contact::setContactDefault(int index) {
	this->data[CONTACT_INDEX] = std::to_string(index);
	this->data[CONTACT_FIRST_NAME] = "first name";
	this->data[CONTACT_LAST_NAME] = "second long long string";
	this->data[CONTACT_NICK_NAME] = "nick";
	this->data[CONTACT_NUMBER] = "0583262";
	this->data[CONTACT_SECRET] = "secret";
}

void Contact::showShortInfo(const int colWidth) {
	for (int info = 0; info <= CONTACT_NICK_NAME; ++info) {
		std::cout << "|";
		if (this->data[info].length() > colWidth) {
			std::cout.width(colWidth);
			std::cout << std::setw(colWidth - 1) << this->data[info].substr(0, colWidth - 1);
			std::cout << '.';
		}
		else {
			std::cout << std::setw(colWidth) << this->data[info];
		}
	}
	std::cout << "|" << std::endl;
}

void Contact::showDetailedInfo() {
	std::cout << "detailed info" << std::endl;
	for (int info = 0; info <= CONTACT_SECRET; ++info) {
		std::cout << std::setw(15) << this->dataNames[info];
		std::cout << " | " << this->data[info] << std::endl;
	}
}
