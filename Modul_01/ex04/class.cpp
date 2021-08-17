/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:40:46 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 15:48:16 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

Class::Class(char *one, char *two)
{
    this->f_str = one;
    this->s_str = two;
    (void)this->files;
}

const std::ofstream* Class::getFiledata(void)
{
    return(this->files);
}

void	Class::setFiledata(std::ofstream *file)
{
    this->files = file;
}
const std::string&	Class::getString(int num)
{
    if (num == 1)
	    return(this->f_str);
    else
        return(this->s_str);
}
void	Class::setString(const std::string& replace, int num)
{
    if (num == 1)
        this->f_str = replace;
    else
        this->s_str = replace;
}
