/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 13:39:44 by maw               #+#    #+#             */
/*   Updated: 2025/08/03 20:08:31 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap()
{
	std::cout << "FragTrap Constructor Called" << std::endl;
    // _name = name;
    _Hit_Points = 100;
    _Energy_points = 100;
    _Attack_damage = 30;
}

FragTrap::FragTrap(): ClapTrap()
{
	std::cout << "FragTrap Constructor Called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor Called" << std::endl;
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