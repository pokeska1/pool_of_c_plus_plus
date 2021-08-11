/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_phonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:07:50 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/11 09:39:24 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	Phone:: add_phone(char *contacts)
{
	int i;
	i = 0;

	std::cout << "first name:" << "\n";
	std::cin >> contacts[i++];
	std::cout << "last name:" << "\n";
	std::cin >> contacts[i++];
	std::cout << "nickname:" << "\n";
	std::cin >> contacts[i++];
	std::cout << "phone number:" << "\n";
	std::cin >> contacts[i++];
	std::cout << "darkest secret:" << "\n";
	std::cin >> contacts[i++];
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