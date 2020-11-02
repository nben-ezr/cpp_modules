/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/23 22:27:18 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/25 21:10:49 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	public:
	
		Fixed() {std::cout << "constructor called" << std::endl;_val = 0;};
		Fixed(const int fixed_int);
		Fixed(const float fixed_float);
		~Fixed() {	std::cout << "destructor called" << std::endl;};
		Fixed(const Fixed &Fixed_copy) {std::cout << "copy constructor called" << std::endl;_val = Fixed_copy.getRawBits();};
		Fixed& operator = (const Fixed &Fixed_copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_val;
		static const int	_frac_bits = 8;
};

std::ostream& operator << (std::ostream &o, Fixed const &output);


#endif