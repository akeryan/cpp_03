/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:11:35 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 08:00:44 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class ClapTrap {
	public:
	// Constructors:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);

	// Destructors:
		~ClapTrap();

	// Overloaded operators
		const ClapTrap &operator=(const ClapTrap &obj);

	// Other public functions:
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setName(const std::string name);		
		void printStatus(void);

	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

};

#endif