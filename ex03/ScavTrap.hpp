/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:53:07 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 10:23:23 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap 
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &obj);
		~ScavTrap();
		const ScavTrap &operator=(const ScavTrap &obj);
		void attack(const std::string &target);
		void guardGate();
		void setHitPoints(const unsigned int value = 100);
		void setEnergyPoints(const unsigned int value = 50);
		void setAttackDamage(const unsigned int value = 20);
};

#endif
