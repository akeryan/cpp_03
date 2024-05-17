/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:12:41 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 10:14:12 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	setHitPoints();
	setEnergyPoints();
	setAttackDamage();
	std::cout << "FragTrap constructor for " << this->name << " is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{ 
	std::cout << "FragTrap copy constructor for " << this->name << " is called" << std::endl;
}

const FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap's copy assignment operator called" << std::endl;
	if (this != &obj)
		ClapTrap::operator=(obj);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructor called" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << " is asking for high five" << std::endl;
}

void FragTrap::setHitPoints(const unsigned int value)
{
	this->ClapTrap::setHitPoints(value);	
}

void FragTrap::setEnergyPoints(const unsigned int value)
{
	this->ClapTrap::setEnergyPoints(value);	
}

void FragTrap::setAttackDamage(const unsigned int value)
{
	this->ClapTrap::setAttackDamage(value);	
}

