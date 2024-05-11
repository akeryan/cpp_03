/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 19:11:35 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/11 19:56:37 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
# define CLAP_TRAP_HPP

# include <string>

class ClapTrap {
	public:
	// Constructors:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);

	// Destructors:
		~ClapTrap();

	// Overloaded operators
		const ClapTrap &operator=(const ClapTrap &obj);

		std::string getName();

	// Other public functions:
		void atack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string	name;
		int			hitPoints;
		int			energy;
		int			atackDamage;

};

#endif