/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:50:44 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 14:55:50 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"


class HumanB{
	public:
		void		attack();
const std::string&	getName(void);
		void		setName(const std::string& str);
		void		setWeapon(Weapon& gun);
					HumanB(const std::string& str);
	private: 
		Weapon *lolz;
		std::string name;
};
