/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:45:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 10:51:25 by akeryan          ###   ########.fr       */
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

	DiamondTrap a("Aram");	
	a.printStatus();
	a.attack("Enemy");

	a.whoAmI();

	return 0;
}