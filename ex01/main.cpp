/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:45:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 07:58:56 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main()
{
	ScavTrap a("A"), b("B"), c(a);	
	c.setName("C");
	c.printStatus();
	c.attack("Enemy");
	c.takeDamage(3);
	a.beRepaired(5);
	a.guardGate();
	return 0;
}