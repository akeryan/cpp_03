/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:45:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/16 19:19:08 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"
#include <iostream>

int main()
{
	FlagTrap a("A"), b("B"), c(a);
	c.setName("C");
	c.attack("B");
	b.takeDamage(5);
	a.beRepaired(6);	
	a.highFiveGuys();

	return 0;
}