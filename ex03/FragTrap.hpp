/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:03:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 10:22:31 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_HPP
# define FLAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &obj);
		~FragTrap();
		const FragTrap &operator=(const FragTrap &obj);
		void highFiveGuys(void);
		void setHitPoints(const unsigned int value = 100);
		void setEnergyPoints(const unsigned int value = 100);
		void setAttackDamage(const unsigned int value = 30);
};

#endif