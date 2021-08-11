/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:14:46 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/10 11:45:46 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int len;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int j = 1; j < argc; j++)
		{
			len = strlen(argv[j]);
			char *str = new char;
			str[len] = '\0';
			for(int i = 0; i < len; i++)
				str[i] = (char)toupper(argv[j][i]);
			std::cout << str;
			delete str;
		}
	std::cout << "\n";
	return (0);
}