/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:25:44 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 06:45:00 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FlagTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public FlagTrap, public ScavTrap
{
	public:
	 	DiamondTrap();
		DiamondTrap(std::string name);
	private:
		std::string name;
};

#endif