#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
public:
	Fixed();
	~Fixed();
	Fixed(Fixed &src);
	Fixed &operator= (const Fixed &src);
	int getRawBits() const;
	void setRawBits( int const raw );

private:
	int m_value;
	static const int s_bits = 8;
};
#endif
