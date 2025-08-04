/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:58:13 by maw               #+#    #+#             */
/*   Updated: 2025/08/03 20:28:58 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap();
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator=(const DiamondTrap &obj);
		~DiamondTrap();
		void	whoAmI();
};

#endif