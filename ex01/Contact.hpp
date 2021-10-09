#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
private:
	std::string data[6];
	std::string dataNames[6];
	enum ContactInfo {
		CONTACT_INDEX = 0,
		CONTACT_FIRST_NAME,
		CONTACT_LAST_NAME,
		CONTACT_NICK_NAME,
		CONTACT_NUMBER,
		CONTACT_SECRET,
		};
public:
	Contact();

	void setContactInfo(int index);
	void setContactDefault(int index);
	void showShortInfo(int colWidth);
	void showDetailedInfo();
};

#endif