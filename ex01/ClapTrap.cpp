/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:22:05 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 07:58:33 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name("Default")
{
	std::cout << "ClapTrap default constructor callsed" << std::endl;
}

ClapTrap::ClapTrap(std::string name): hitPoints(10), energyPoints(10), attackDamage(0)
{
	this->name = name;
	std::cout << "ClapTrap constructor for " << this->name << " is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;	
	std::cout << "ClapTrap copy constructor for " << this->name << " is called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " destructor called" << std::endl;
}

const ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	if (this != &obj) {
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energyPoints = obj.energyPoints;
		this->attackDamage = obj.attackDamage;
	}
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	} else {
		std::cout << "ClapTrap " << this->name << " is out of energyPoints and cannot attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0) {
		this->hitPoints -= amount;
		std::cout << "ClapTrap " << this->name << " took " << amount << " damage points" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints > 0) {
		this->energyPoints--;
		this->hitPoints += amount;
		std::cout << "ClapTrap " << this->name << " recived " << amount << " repair points" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->name << " has 0 energyPoints points and cannot get repaired" << std::endl;
	}
}

void ClapTrap::setName(const std::string name)
{
	if (name != "")
		this->name = name;
}

void ClapTrap::printStatus(void)
{
	std::cout << "Stats for ClapTrap " << this->name << " ---------------------------" << std::endl;
	std::cout << "name:\t\t" << this->name << std::endl;
	std::cout << "hit points:\t" << this->hitPoints << std::endl;
	std::cout << "energy points:\t" << this->energyPoints << std::endl;
	std::cout << "attack damage:\t" << this->attackDamage << std::endl;
	std::cout <<  "------------------------------------------------" << std::endl;
}

		


