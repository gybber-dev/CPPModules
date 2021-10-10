#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

# define WELCOME_MSG "Welcome to yeschall's phonebook.\nAvailable commands are ADD, SEARCH and EXIT"
# define MSG_ADD_NEW_CONTACT "Add information about the contact:"
# define MSG_CONTACT_SUCCESS_ADDED "Contact was successfully added."
# define MSG_NO_CONTACTS "There is no any contact in Phonebook"
# define MSG_ENTER_CONTACTS_INDEX "Enter contact's index to view full info"
class Phonebook
{
private:
	Contact contacts[8];
	int	writeTo, // to rewrite the oldest contact
		counter,    // number of contacts
		maxLimit; // 8

	void _detailedInfoListener();
	int _findContact(std::string index);
public:
	Phonebook();

	void addContact();
	void searchContact();
	static void showStartMsg();
};

#endif