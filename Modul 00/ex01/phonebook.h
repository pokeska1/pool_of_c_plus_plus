#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
class Phone
{
	public:
	int			num_cont;
	std::string	first_name[8];
	std::string	last_name[8];
	std::string	nickname[8];
	std::string	phone_number[8];
	std::string	darkest_secret[8];
	bool		full[8];
	void		add_phone(int num_cont);
	void		serch_phone(void);
	void		prepare_full(void);
	private:
	void		serch_str_more_ten(std::string str, int len_str);
	void		serch_str_less_ten(std::string str,int len);
	void		top_of_search_tab(int slechn);
	void		floor_of_search_tab(void);
	void		cntr_d(bool result);
};

#endif