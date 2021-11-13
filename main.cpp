//
// Created by Ysilla Eschallots on 10/16/21.
//
#include <iostream>

int main(int argc, char *argv[])
{
	const char * a = "a";
	char const * c = "c";
	a="bbbb";
	c="dddd";
	std::cout << a << std::endl;
	std::cout << c << std::endl;

	char * const aa = "aa";
//	aa="bb"; // error

	*aa = 'y';
	std::cout << aa << std::endl;
}