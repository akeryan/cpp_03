/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:25:44 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 10:47:53 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap 
{
	public:
	 	DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		void attack(const std::string &target);
		void printStatus(void);
		void whoAmI(void);
	private:
		std::string name;
};

#endif