/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_phonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:07:50 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/11 10:03:29 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	Phone:: add_phone(int num_cont)
{
	std::cout << "first name:" << "\n";
	getline(std::cin, first_name[num_cont]);
	std::cout << "last name:" << "\n";
	getline(std::cin, last_name[num_cont]);
	std::cout << "nickname:" << "\n";
	getline(std::cin, nickname[num_cont]);
	std::cout << "phone number:" << "\n";
	getline(std::cin, phone_number[num_cont]);
	std::cout << "darkest secret:" << "\n";
	getline(std::cin, darkest_secret[num_cont]);
}

void	Phone:: serch_phone(void)
{
	
}

	//private://все что после нее закрытая
/* конструктор по умолчанию
	Phone()
	{
		str new = char[size];
	}

	~Phone()//Диструктор
	{
		delete[] str;
	}

	КОНСТРУКТОР КОПИРОВАНИЯ
	Strind s1 = s;
	он принимает (const string&)
*/