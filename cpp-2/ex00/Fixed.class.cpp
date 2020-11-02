/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/23 22:27:31 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/24 20:45:25 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed& Fixed::operator = (const Fixed &Fixed_copy)
{
	std::cout << "assignation operator called" << std::endl;
	_val = Fixed_copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits(int const raw)
{
	this->_val = raw;
}
