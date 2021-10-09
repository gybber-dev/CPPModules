#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>


class Phonebook
{
private:
	Contact contacts[8];
	int oldIndex;
public:
	Phonebook();

	void addContact(void);
	void searchContact(void);
};

#endif