/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_phonebook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 14:07:50 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/11 12:13:14 by jmarian          ###   ########.fr       */
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
	full[num_cont] = 1;
}

void	Phone:: serch_str_more_ten(std::string str, int len_str)
{
	int mimik;

	mimik = 0;
	while ((len_str + mimik++) < 10)
				std::cout << ' ';
	std::cout << str << "|";
}
void	Phone:: serch_str_less_ten(std::string str,int len)
{
	str.replace(9, len, ".");
	std::cout << str << "|";
}

void	Phone:: top_of_search_tab(int slechn)
{
	int len;

	while (slechn-- > 0)
		std::cout << std::endl;
	len = 0;
	while (len++ != 66)
		std::cout << "_";
	std::cout << std::endl;
	serch_str_more_ten("id", strlen("id"));
	serch_str_more_ten("first name", strlen("first name"));
	serch_str_more_ten("last name", strlen("last name"));
	serch_str_more_ten("nickname", strlen("nickname"));
	serch_str_less_ten("phone number", strlen("phone number"));
	serch_str_less_ten("darkest secret", strlen("darkest secret"));
	len = 0;
	std::cout << std::endl;
	while (len++ != 66)
		std::cout << "¯";
	std::cout << std::endl;
}

void	Phone:: floor_of_search_tab(void)
{
	int len;

	len = 0;
	std::cout << std::endl;
	while (len++ != 66)
		std::cout << "¯";
	std::cout << std::endl;
}


void	Phone:: serch_phone(void)
{
	int	i;
	int	mimik;
	int	len;
	bool result;
	std::string str;

	i = 0;
	mimik = 0;
	top_of_search_tab(0);
	if (full[0] == 0)
	{
		std::cout << "\e[0;35mThere are currently no contacts.\e[0m" << std::endl;
		return ;
	}
	while (full[i] == 1 && i < 8)
	{
		std::cout << "         " << i + 1 << "|";
		if (first_name[i].size() < 10)
			serch_str_more_ten(first_name[i], first_name[i].size());
		else
			serch_str_less_ten(first_name[i], first_name[i].size());
		if (last_name[i].size() < 10)
			serch_str_more_ten(last_name[i], last_name[i].size());
		else
			serch_str_less_ten(last_name[i], last_name[i].size());
		if (nickname[i].size() < 10)
			serch_str_more_ten(nickname[i], nickname[i].size());
		else
			serch_str_less_ten(nickname[i], nickname[i].size());
		if (phone_number[i].size() < 10)
			serch_str_more_ten(phone_number[i], phone_number[i].size());
		else
			serch_str_less_ten(phone_number[i], phone_number[i].size());
		if (darkest_secret[i].size() < 10)
			serch_str_more_ten(darkest_secret[i], darkest_secret[i].size());
		else
			serch_str_less_ten(darkest_secret[i], darkest_secret[i].size());
		i++;
		std::cout << "\n";
	}
	floor_of_search_tab();
	std::cout << "\e[0;35mWhat id do you want to see: \e[0m";
	result = getline(std::cin, str);
	if (str[0] >= 48 && str[0] <= 57)
		len = std::stoi(str);
	if (!result || str == "EXIT")
		exit(1);
	if (len - 1 < 8 && full[len - 1] == 1)
	{
		std::cout << "id\t\t" << len << std::endl;
		std::cout << "first name\t" << first_name[len - 1] << std::endl;
		std::cout << "last name\t" << last_name[len - 1] << std::endl;
		std::cout << "nickname\t" << nickname[len - 1] << std::endl;
		std::cout << "phone number\t" << phone_number[len - 1] << std::endl;
		std::cout << "darkest secret\t" << darkest_secret[len - 1] << std::endl;
		std::cout << std::endl;
	}
}

void	Phone:: prepare_full(void)
{
	int	i;

	i = 0;
	while (i < 8)
		full[i++] = 0;
}
