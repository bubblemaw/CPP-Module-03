/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:49:41 by masase            #+#    #+#             */
/*   Updated: 2025/08/03 21:53:25 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _Hit_Points(10), _Energy_points(10), _Attack_damage(0)
{
	std::cout << "ClapTrap Constructor Called" << std::endl; 	
}

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap Constructor Called" << std::endl;    
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl; 	
	*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl; 	
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_Hit_Points = obj._Hit_Points;
		this->_Energy_points = obj._Energy_points;
		this->_Attack_damage = obj._Attack_damage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap " << _name << " attacks " << target
    << " causing " << _Attack_damage << " points of damage" << std::endl; 
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > _Hit_Points)
        _Hit_Points = 0;
    else
        _Hit_Points -= amount;

    std::cout << "ClapTrap " << _name << " took " << amount
    << " points of damage" << std::endl;     
}

void    ClapTrap::beRepaired(unsigned int amount)
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
    _Hit_Points += amount;
    std::cout << "ClapTrap " << _name << " regain " << amount
    << " points of Hit Points" << std::endl;    
}