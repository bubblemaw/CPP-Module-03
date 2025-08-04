/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:48:13 by masase            #+#    #+#             */
/*   Updated: 2025/07/31 13:20:56 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap bg("BG");
	ScavTrap drive("DriveValia");
	FragTrap bibi("bibiboy");

	std::cout << " TEST CLAPTRAP " << std::endl;
	bg.attack("Albert");
	bg.takeDamage(5);
	bg.beRepaired(3);
	bg.takeDamage(4);
	bg.attack("Albert");
	bg.beRepaired(3);
	bg.attack("Albert");

	std::cout << " TEST SCAVTRAP " << std::endl;	
	drive.attack("Koba");
	drive.takeDamage(5);
	drive.beRepaired(3);
	drive.takeDamage(4);
	drive.attack("Gertrud");
	drive.beRepaired(3);
	drive.attack("gozou");
	drive.beRepaired(3);
	drive.guardGate();

	std::cout << " TEST FRAGTRAP " << std::endl;	
	bibi.attack("Koba");
	bibi.takeDamage(5);
	bibi.beRepaired(3);
	bibi.takeDamage(4);
	bibi.attack("Gertrud");
	bibi.beRepaired(3);
	bibi.attack("gozou");
	bibi.beRepaired(3);
	bibi.attack("1");
	bibi.highFivesGuys();

	return (0);
}