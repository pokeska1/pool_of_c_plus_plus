/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:13:03 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 12:11:30 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie{
private:
	std::string name;
	
public:
	~Zombie( void );
	void announce( void );

	void setName(const std::string& str);
};

Zombie* zombieHorde( int N, std::string name );

#endif
