/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:40:49 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/11 09:50:20 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(void)
{
	Phone		book;
	std::string	str;
	bool		result;
	int			num_cont;

	num_cont = 0;
	while(1);
	{
		if (num_cont == 7)
			num_cont = 0;
		result = getline(std::cin, str);
		if (str == "EXIT" || !result)
			return(0);
		else if (str == "ADD")
			book.add_phone(book.contacts[num_cont]);
		else if (str == "SEARCH")
			book.serch_phone();
		num_cont++;
	}
	return(0);
}