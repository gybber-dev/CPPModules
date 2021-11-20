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
	Fixed &operator= (const Fixed &src);
	int getRawBits() const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;

private:
	int m_value;
	static const int s_bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
