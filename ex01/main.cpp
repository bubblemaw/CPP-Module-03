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

#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap bg("BG");
	ScavTrap drive("DriveValia");

	bg.attack("Albert");
	bg.takeDamage(5);
	bg.beRepaired(3);
	bg.takeDamage(4);
	bg.attack("Albert");
	bg.beRepaired(3);
	bg.attack("Albert");
	bg.beRepaired(3);
	bg.attack("Albert");
	bg.beRepaired(3);
	bg.attack("Albert");
	bg.beRepaired(3);
	bg.attack("Albert");
	bg.beRepaired(3);
	
	drive.attack("Koba");
	drive.takeDamage(5);
	drive.beRepaired(3);
	drive.takeDamage(4);
	drive.attack("Gertrud");
	drive.beRepaired(3);
	drive.attack("gozou");
	drive.beRepaired(3);
	drive.attack("1");
	drive.beRepaired(3);
	drive.attack("2");
	drive.beRepaired(3);
	drive.attack("3");
	drive.beRepaired(3);		
	return (0);
}