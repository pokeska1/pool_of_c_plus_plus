/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:50:13 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 15:11:54 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& gun): lolz(gun)
{
	this->name = name;
	this->lolz = gun;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->lolz.getType() << std::endl;
}

const std::string& HumanA::getName(void)
{
	return(this->name);
}

void HumanA::setName(const std::string& str)
{
	this->name = str;
}