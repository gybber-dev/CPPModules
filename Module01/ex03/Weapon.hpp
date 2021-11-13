//
// Created by Ysilla Eschallots on 10/16/21.
//

#ifndef CPPMODULES_WEAPON_HPP
#define CPPMODULES_WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
private:
	std::string m_type;
public:
	Weapon();
	Weapon(std::string const & type);
	~Weapon();
	const std::string & getType () const;
	void setType(const std::string & type);
};

#endif //CPPMODULES_WEAPON_HPP
