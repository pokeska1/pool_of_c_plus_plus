/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:12:57 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 12:11:22 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie:: announce(void)
{
	
	std::cout << "<" << name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie:: ~Zombie(void)
{
	std::cout << "<" << name << ">  I'm dead....  really dead" << std::endl;
}

void Zombie::setName(const std::string& str)
{
	this->name = str;
}