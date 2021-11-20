#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed(): m_value(0) {
	cout << "Default constructor\n";
}

Fixed::~Fixed() {
	cout << "Default destructor\n";
}

Fixed::Fixed(Fixed &src) {
	cout << "Copy constructor\n";
	this->m_value = src.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &src) {
	cout << "Assignation operator\n";
	this->m_value = src.getRawBits();
	return *this;
}

void Fixed::setRawBits(const int raw) {
	cout << "setRawBits called\n";
	this->m_value = raw;
}

int Fixed::getRawBits(void) const {
	cout << "getRawBits called\n";
	return this->m_value;
}

std::ostream &operator<<(std::ostream &out, const Fixed &src) {
	out << "TODO float to fix and print\n";
	return (out);
}

Fixed::Fixed(const int intN) {
	cout << "Integer counstructor\n";
	this->m_value = intN << this->s_bits;
}

