#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
class Phone
{
	public://все что после нее публичная 
	char contacts[8][5];
	/*
	std::string first_name;
	std::string last_name;
	std::string  nickname;
	std::string phone_number;
	std::string darkest_secret;
	*/
	void	add_phone(char *contacts);
	void	serch_phone(void);
};

#endif