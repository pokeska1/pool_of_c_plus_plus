#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
class Phone
{
	public://все что после нее публичная 
	//char contacts[8][5];
	int			num_cont;
	std::string	first_name[8];
	std::string	last_name[8];
	std::string	nickname[8];
	std::string	phone_number[8];
	std::string	darkest_secret[8];
	
	void	add_phone(int num_cont);
	void	serch_phone(void);
};

#endif