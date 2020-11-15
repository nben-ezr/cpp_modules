/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 23:27:25 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 01:32:02 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character{
	private:
		std::string _name;
		int			_AP;
		AWeapon*	_Char_wep;
	
	public:
		Character(std::string const & name);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string const getName() const;
		int	getAP() const;
		AWeapon* getAWeapon() const;
	};

std::ostream& operator << (std::ostream& o, Character const &output);

#endif

