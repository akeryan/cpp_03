/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:12:41 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 06:44:41 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"
#include <iostream>

FlagTrap::FlagTrap(): ClapTrap()
{
	std::cout << "FlagTrap default constructor called";
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FlagTrap constructor for " << this->name << " is called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &obj): ClapTrap(obj)
{ 
	std::cout << "FlagTrap copy constructor for " << this->name << " is called" << std::endl;
}

const FlagTrap &FlagTrap::operator=(const FlagTrap &obj)
{
	std::cout << "FlagTrap's copy assignment operator called" << std::endl;
	if (this != &obj)
		ClapTrap::operator=(obj);
	return *this;
}

FlagTrap::~FlagTrap()
{
	std::cout << "FlagTrap " << this->name << " destructor called" << std::endl;
}

void FlagTrap::highFiveGuys(void)
{
	std::cout << "FlagTrap " << this->name << " is asking for high five" << std::endl;
}