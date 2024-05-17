/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:57:01 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 10:51:07 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{
	this->name = ClapTrap::name + "_clap_name";
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->FragTrap::setHitPoints();
	this->ScavTrap::setEnergyPoints();
	this->FragTrap::setAttackDamage();
}

void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::printStatus(void) {
	std::cout << "Stats for DiamondTrap " << this->name << " ---------------------------" << std::endl;
	std::cout << "Diamond name:\t" << this->name << std::endl;
	ClapTrap::printStatus();
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "whoAmI? " << "My DiamondTrap name is: " << this->name << "; my ClapTrap name is: " << this->ClapTrap::name << std::endl; 
}
