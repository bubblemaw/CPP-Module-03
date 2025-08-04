/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:58:06 by maw               #+#    #+#             */
/*   Updated: 2025/08/03 20:52:13 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): _name(name), ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Constructor Called" << std::endl; 	
    _Hit_Points = FragTrap::_Hit_Points;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = FragTrap::_Attack_damage;	
}

DiamondTrap::DiamondTrap():_name("Default"), ClapTrap("Default_clap_name")
{
   	std::cout << "DiamondTrap Constructor Called" << std::endl;
    _Hit_Points = FragTrap::_Hit_Points;
    _Energy_points = ScavTrap::_Energy_points;
    _Attack_damage = FragTrap::_Attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
    *this = obj;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
	std::cout << "Diamond Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_Hit_Points = obj._Hit_Points;
		this->_Energy_points = obj._Energy_points;
		this->_Attack_damage = obj._Attack_damage;
	}
    return (*this);    
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My DiamondTrap name is " << _name <<
	" and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
