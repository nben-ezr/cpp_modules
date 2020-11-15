/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nben-ezr <nben-ezr@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/15 01:11:20 by nben-ezr      #+#    #+#                 */
/*   Updated: 2020/11/15 02:25:34 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("Jeff");

	std::cout << *me;
	
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	/* attacks without weapon below */
	
	me->attack(b);
	
	/* equips PlasmaRifle first, then PowerFist below */
	
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	
	/* attacks RadScorpion till it has 0 hp */
	
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	/* keeps shooting at dead body <---- seg fault cause there is no scorp "b" */

//	me->attack(b);
//	std::cout << *me;
	
	/* attack till no AP below */

	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	
	/* does not attack below due to low AP */
	
	me->attack(c);
	std::cout << *me;

	/* recovers hp till 32 */

	me->recoverAP();
	me->recoverAP();	
	me->recoverAP();

	/* recoers hp fully to 40 */

	me->recoverAP();

	return 0;
}
