/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:26:25 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 12:14:03 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(const std::string& _name)
{
	this->name = _name;
}

void	Zombie:: announce(void)
{
	
	std::cout << "<" << name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie:: ~Zombie(void)
{
	std::cout << "<" << name << ">  I'm dead....  really dead" << std::endl;
}

