/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:45:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 13:35:47 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
	ClapTrap a, b("B"), c(b);
	a.printStatus();
	b.printStatus();
	c.setName("C");
	c.printStatus();
	c.attack("B");
	b.takeDamage(5);
	a.beRepaired(6);	

	return 0;
}