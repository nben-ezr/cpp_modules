/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/23 22:27:31 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/25 21:17:17 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(const int fixed_int)
{
	std::cout << "overload int constructor called" << std::endl;
	this->_val = fixed_int << this->_frac_bits;
}

Fixed::Fixed(const float fixed_float)
{
	std::cout << "overload float constructor called" << std::endl;
	this->_val = roundf(fixed_float * (1 << this->_frac_bits));
}

Fixed& Fixed::operator = (const Fixed &Fixed_copy)
{
	std::cout << "assignation operator called" << std::endl;
	_val = Fixed_copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits function called" << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_val / (1 << this->_frac_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_val >> this->_frac_bits);
}

std::ostream& operator << (std::ostream &o, Fixed const &output)
{
	o << output.toFloat();
	return (o);
}