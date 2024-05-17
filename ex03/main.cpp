/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:45:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 15:26:19 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap c("test");
	c.printStatus();

	ScavTrap u("scav");
	u.printStatus();

	FragTrap f("frag");
	f.printStatus();

	DiamondTrap a("Aram"), h(a);	
	a.printStatus();
	h.setName("Copy");
	h.printStatus();
	a.attack("Enemy");
	a.beRepaired(17);
	a.takeDamage(9);

	a.guardGate();
	a.highFiveGuys();

	a.whoAmI();

	h = a;
	h.printStatus();

	return 0;
}