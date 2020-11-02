/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.class.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/23 22:27:18 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/10/24 20:31:28 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>

class	Fixed
{
	public:
	
		Fixed() {std::cout << "constructor called" << std::endl;_val = 0;};
		~Fixed() {	std::cout << "destructor called" << std::endl;};
		Fixed(const Fixed &Fixed_copy) {std::cout << "copy constructor called" << std::endl;_val = Fixed_copy.getRawBits();};
		Fixed& operator = (const Fixed &Fixed_copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);


	private:
		int					_val;
		static const int	_frac_bits = 8;
};

#endif