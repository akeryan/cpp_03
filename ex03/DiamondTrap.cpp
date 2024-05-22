/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:57:01 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/22 08:54:37 by akeryan          ###   ########.fr       */
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

DiamondTrap::DiamondTrap(const DiamondTrap &obj): ClapTrap(obj)
{ 
	this->name = obj.name;
	std::cout << "DiamondTrap copy constructor for " << this->name << " is called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << "DiamondTrap constructor for " << this->name << " is called" << std::endl;
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

void DiamondTrap::setName(const std::string name)
{
	std::cout << "DiamondTrap's setName called: " << this->name << " -> " << name << std::endl;
	if (name != "") {
		this->name = name;
		this->ClapTrap::name = this->name + "_clap_name";
	}
}

const DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap's copy assignment operator called" << std::endl;
	if (this != &obj) {
		this->name = obj.name;
		ClapTrap::operator=(obj);
	}
	return *this;
}
