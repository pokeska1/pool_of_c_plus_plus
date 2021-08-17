/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:49:53 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 13:53:15 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& str)
{
	this->setType(str);
}

const std::string& Weapon::getType(void)
{
	return(this->type);
}

void Weapon::setType(const std::string& str)
{
	this->type = str;
}