/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 12:48:46 by masase            #+#    #+#             */
/*   Updated: 2025/07/29 15:27:00 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _Hit_Points;
        int _Energy_points;
        int _Attack_damage;
    public:
        ClapTrap(std::string name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &obj);
        ClapTrap &operator=(const ClapTrap &obj);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif
