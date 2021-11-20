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
	if (this == &src) {
		return *this;
	}
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

