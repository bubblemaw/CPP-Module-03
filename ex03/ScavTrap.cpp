/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:41:34 by maw               #+#    #+#             */
/*   Updated: 2025/08/03 21:52:43 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap Constructor Called" << std::endl;
    _Hit_Points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;
}

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "ScavTrap Constructor Called" << std::endl;
    _Hit_Points = 100;
    _Energy_points = 50;
    _Attack_damage = 20;    
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
    *this = obj;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_Hit_Points = obj._Hit_Points;
		this->_Energy_points = obj._Energy_points;
		this->_Attack_damage = obj._Attack_damage;
	}
    return (*this);
}
void ScavTrap::attack(const std::string& target)
{
    if (_Energy_points < 1)
    {
		std::cout << "not enough Energy Points :(" << std::endl;
        return;  
    }
    if (_Hit_Points < 1)
    {
		std::cout << "not enough Hit Points :(" << std::endl;
        return;  
    }	
    _Energy_points--;
    std::cout << "ScavTrap " << _name << " attacks " << target
    << " causing " << _Attack_damage << " points of damage" << std::endl; 
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has enterred in Gate keeper mode" << std::endl;
}