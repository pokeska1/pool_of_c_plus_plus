/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:26:11 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 12:17:11 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	
	Zombie *a;
	a = newZombie("Kekv");
	a->announce();
	randomChump("loolkek");
	delete a;
	return (0);
}
