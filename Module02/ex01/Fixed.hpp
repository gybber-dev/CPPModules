#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(Fixed &src);
	Fixed(const int intN);
	Fixed(const float floatN);
	Fixed &operator= (const Fixed &src);
	friend std::ostream &operator << (std::ostream &out, const Fixed &src);
	int getRawBits() const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int m_value;
	static const int s_bits = 8;
};
#endif
