/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:03:51 by akeryan           #+#    #+#             */
/*   Updated: 2024/05/17 06:44:04 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAG_TRAP_HPP
# define FLAG_TRAP_HPP

# include "ClapTrap.hpp"

class FlagTrap: public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		FlagTrap(const FlagTrap &obj);
		~FlagTrap();
		const FlagTrap &operator=(const FlagTrap &obj);
		void highFiveGuys(void);
};

#endif