/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:39:44 by maw               #+#    #+#             */
/*   Updated: 2025/07/31 13:49:39 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap Constructor Called" << std::endl;
    _Hit_Points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
}

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap Constructor Called" << std::endl;
    _Hit_Points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
    *this = obj;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_Hit_Points = obj._Hit_Points;
		this->_Energy_points = obj._Energy_points;
		this->_Attack_damage = obj._Attack_damage;
	}
    return (*this);
}

void FragTrap::attack(const std::string& target)
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
    std::cout << "FragTrap " << _name << " attacks " << target
    << " causing " << _Attack_damage << " points of damage" << std::endl; 
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " Heyyy boyy give me a high fiveee !!!" << std::endl;
}