#include "Fixed.hpp"

using std::cout;
using std::endl;

Fixed::Fixed(): m_value(0) {
	cout << "Default constructor\n";
}

Fixed::~Fixed() {
	cout << "Default destructor\n";
}

Fixed::Fixed(const Fixed &src) {
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
	out << src.toFloat();
	return (out);
}

Fixed::Fixed(const int intN) {
	cout << "Integer constructor\n";
	this->m_value = intN << Fixed::s_bits;
}

Fixed::Fixed(const float floatN) {
	cout << "Float constructor\n";
	this->m_value = (int)(roundf(floatN * (1 << Fixed::s_bits)));
}

float Fixed::toFloat(void) const
{
	return (float)this->m_value/ (1 << Fixed::s_bits);
}

int Fixed::toInt(void) const
{
	return (this->m_value >> Fixed::s_bits);
}

