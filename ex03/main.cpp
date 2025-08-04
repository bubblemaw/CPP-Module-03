/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <marvin@42lausanne.ch>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 13:38:50 by masase            #+#    #+#             */
/*   Updated: 2025/08/04 13:38:54 by masase           ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a;
    DiamondTrap b("Solo");
    DiamondTrap c(a);
    
    a.whoAmI();
    a.attack("mimi mati");
    b.whoAmI();
    b.attack("BRIGI STONE");
    c.whoAmI();
    a.takeDamage(20);
    a.attack("bill gates");
    a.takeDamage(100);
    a.attack("Geroges W Bush");     
}