/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:26:51 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 12:14:58 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie{
	public:
		void	setName(const std::string& _name);
		void	announce( void );
		~Zombie( void );
	private:
		std::string	name;	
};

	Zombie*	newZombie( std::string name );
	void	randomChump( std::string name );
#endif
