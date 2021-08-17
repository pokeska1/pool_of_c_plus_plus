/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:40:53 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 15:47:20 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>

class Class
{
	public:
    Class(char *one, char *two);
    const std::ofstream* getFiledata(void);
    void	setFiledata(std::ofstream *file);
    const std::string&	getString(int num);
    void				setString(const std::string& replace, int num);
	private:
		std::string		f_str;
		std::string		s_str;
		std::ofstream   *files;
};