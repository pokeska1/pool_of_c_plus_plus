/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:50:24 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 14:58:48 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


class HumanA{
	public:
		void attack();
		const std::string& getName(void);
		void setName(const std::string& str);
		HumanA(const std::string& str, Weapon& gun);
	private: 
		Weapon &lolz;
		std::string name;
};