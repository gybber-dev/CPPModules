//
// Created by Ysilla Eschallots on 11/13/21.
//


#include "Karen.hpp"
using std::cout;
using std::string;
using std::endl;

void Karen::debug(void) {
	cout << "DEBUG message\n";
}

void Karen::info(void) {
	cout << "INFO message\n";
}

void Karen::warning(void) {
	cout << "WARNING message\n";
}

void Karen::error(void) {
	cout << "ERROR message\n";
}

void Karen::complain(std::string level) {
	int i = 0;
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*functionsPtr[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	while(i < 4 && level != levels[i]) {
		i++;
	}
	switch (i) {
		case 0:
			(this->*(functionsPtr[0]))();
		case 1:
			(this->*(functionsPtr[1]))();
		case 2:
			(this->*(functionsPtr[2]))();
		case 3:
			(this->*(functionsPtr[3]))();
			break ;
		default:
			cout << BLABLA_MESSAGE << endl;
	}
}

Karen::Karen() {
}

Karen::~Karen() {
}

