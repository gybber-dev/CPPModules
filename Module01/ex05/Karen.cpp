//
// Created by Ysilla Eschallots on 11/13/21.
//


#include "Karen.hpp"
using std::cout;
using std::string;

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
	unsigned long i = 0;
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while(i < 4 && level != levels[i]) {
		i++;
	}
	void (Karen::*functionsPtr[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	if (i < sizeof(levels) / sizeof(levels[0])) {
		(this->*(functionsPtr[i]))();
	}
}

Karen::Karen() {
}

Karen::~Karen() {
}

