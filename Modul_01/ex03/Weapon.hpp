/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:50:03 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 14:55:06 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>

class Weapon{
	public:
		const std::string& getType(void);
		void setType(const std::string& str);
		Weapon(const std::string& str);
	private:
		std::string type;
};