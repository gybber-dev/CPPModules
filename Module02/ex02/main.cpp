#include "Fixed.hpp"

using std::cout;
using std::endl;

int main( void )
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << b << endl;
	cout << Fixed::max(a, b) << endl;
	cout << Fixed::min(a, b) << endl;
	Fixed z(0);
	cout << "z " << z << endl << "a " << a << endl << "b " << b <<  endl;
	cout << a * b << endl;
	cout << b / z << endl;
//	int aa = 0;
//	cout << 1 / aa << endl;
	return 0;
}