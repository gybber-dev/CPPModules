#include <iostream>
#include <iomanip>

int main(void)

{
	std::cout << '|';
//	std::cout.width(10);
	std::cout.fill('.');
	std::cout << std::setw(10) << 1001;
	std::cout << '|'<< std::endl;
}
