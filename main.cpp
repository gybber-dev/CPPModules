#include <iostream>
#include <iomanip>
#include <chrono>

int main(void)

{
	std::time_t t = std::time(0);   // get time now
	std::tm* now = std::localtime(&t);
	std::cout << '['
			  << std::setw(2) << std::setfill('0') << now->tm_year + 1900
			  << std::setw(2) << std::setfill('0') << now->tm_mon + 1
			  << std::setw(2) << std::setfill('0') << now->tm_mday << '_'
			  << std::setw(2) << std::setfill('0') << now->tm_hour
			  << std::setw(2) << std::setfill('0') << now->tm_min
			  << std::setw(2) << std::setfill('0') << now->tm_sec << ']'
			  << std::endl;
}
