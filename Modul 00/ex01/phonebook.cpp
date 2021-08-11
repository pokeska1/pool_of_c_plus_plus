/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:40:49 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/11 12:12:58 by jmarian          ###   ########.fr       */
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
		{
			std::cout << "\e[0;35msee you later\e[0m" << std::endl;
			return(0);
		}
		else if (str != "SEARCH" && str != "ADD")
		{
			std::cout << "\e[0;32m You \e[0m" << "\e[0;31m MUST\e[0m" << "\e[0;32m  write one of these commands\e[0m" << std::endl;
			std::cout <<"\e[0;31m ADD or SEARCH or EXIT\e[0m" << std::endl;
		}
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