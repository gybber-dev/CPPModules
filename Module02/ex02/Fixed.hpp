#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>


/*
 * Info is under cat:
 * https://ee.sharif.edu/~asic/Tutorials/Fixed-Point.pdf
 *
 * */

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &src);
	Fixed(const int intN);
	Fixed(const float floatN);
	int getRawBits() const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	Fixed &operator =(const Fixed &src);
	Fixed operator +(const Fixed &a) const;
	Fixed operator -(const Fixed &a) const;
	Fixed operator *(const Fixed &a) const;
	Fixed operator /(const Fixed &a) const;
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int);
	Fixed operator--(int);
	bool operator >(const Fixed &a) const;
	bool operator <(const Fixed &a) const;
	bool operator >=(const Fixed &a) const;
	bool operator <=(const Fixed &a) const;
	bool operator ==(const Fixed &a) const;
	bool operator !=(const Fixed &a) const;
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max (Fixed &a, Fixed &b);
	static Fixed &min (Fixed &a, Fixed &b);

private:
	int m_value;
	static const int s_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
