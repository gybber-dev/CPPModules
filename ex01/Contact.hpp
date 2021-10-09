#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

enum ContactInfo
{
	CONTACT_INDEX = 0,
	CONTACT_FIRST_NAME,
	CONTACT_LAST_NAME,
	CONTACT_NICK_NAME,
	CONTACT_NUMBER,
	CONTACT_SECRET,
};

class Contact
{
private:
	std::string data[6];

public:
	Contact();


};

#endif