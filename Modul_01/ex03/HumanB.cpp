/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:50:37 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 15:07:14 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& str)
{
	this->name = str;
}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << lolz->getType() << std::endl;
}

const std::string&	HumanB::getName(void)
{
	return(this->name);
}

void	HumanB::setName(const std::string& str)
{
	this->name = str;
}

void	HumanB::setWeapon(Weapon& gun)
{
	lolz = &gun;
}