/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:40:49 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/11 11:50:26 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	main(void)
{
	Phone		book;
	std::string	str;
	bool		result;

	book.num_cont = 0;
	book.prepare_full();
	while(1)
	{
		std::cout << "Enter the command" << std::endl;
		if (book.num_cont == 7)
			book.num_cont = 0;
		result = getline(std::cin, str);
		if (str == "EXIT" || !result)
			return(0);
		else if (str == "ADD")
		{
			book.add_phone(book.num_cont);
			book.num_cont++;
		}
		else if (str == "SEARCH")
			book.serch_phone();
	}
	return(0);
}