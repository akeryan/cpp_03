/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:22:05 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/11 20:51:09 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name): hitPoints(10), energy(10), atackDamage(0)
{
	this->name = name;
	std::cout << "<ClapTrap constructor> :object " << this->name << " is created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;	
	std::cout << "<ClapTrap copy constructor>: object " << this->name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "<ClapTrap destructor called>" << std::endl;
}

const ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	if (this != &obj) {
		this->name = obj.name;
		this->hitPoints = obj.hitPoints;
		this->energy = obj.energy;
		this->atackDamage = obj.atackDamage;
	}
	std::cout << "<Copy assignment operator>: called" << std::endl;
	return *this;
}

void ClapTrap::atack(const std::string &target)
{
	if (this->energy > 0) {
		std::cout << "<Object " << this->name << " attacks object " << target << ">: " << this->atackDamage << " points of damage caused!" << std::endl;
		energy--;
	} else {
		std::cout << "ClapTrap " << this->name << " is out of energy and cannot attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0) {
		this->hitPoints -= amount;
		std::cout << "<Object " << this->name << ">: took " << amount << "damage points" << std::endl;
	} else {
		std::cout << "<Object  " << this->name << ">: is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energy > 0) {
		this->energy--;
		this->hitPoints += amount;
		std::cout << "<Object " << this->name << ">: recived " << amount << " repair points" << std::endl;
	} else {
		std::cout << "Object " << this->name << ">: has 0 energy points and cannot get repaired" << std::endl;
	}
}


