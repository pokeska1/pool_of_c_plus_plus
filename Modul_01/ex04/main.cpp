/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarian <jmarian@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:15:50 by jmarian           #+#    #+#             */
/*   Updated: 2021/08/12 15:51:38 by jmarian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class.hpp"

// std::string::npos == -1
void    check_valid(int argc, char **argv)
{
    std::string filename;
    std::string extension;

    filename = argv[1];
    extension = ".txt";
    std::size_t found = filename.find(extension);
    if ((argc != 4) || (found == std::string::npos))
    {
        std::cout << "I need 1-name Txt_File 2 and 3 not empty string!" << std::endl;
        exit(1);
    }
    else if (!argv[2] || !argv[3])
    {
        std::cout << "I need non Void 2 and 3 string!" << std::endl;
        exit(2);
    }
}

void    engine(std::ifstream& file, std::ofstream& new_file, Class& FILENAME)
{
    std::string first_str;
    std::string second_str;
    int         pointer;
    std::string mimic_two;

    first_str = FILENAME.getString(1);
    second_str = FILENAME.getString(2);
    mimic_two = "";
    std::getline(file, mimic_two);
    while(!file.eof())
    {
        mimic_two += "\n";
        pointer = mimic_two.find(first_str);
        while (pointer != -1)
        {
            mimic_two.erase(pointer, 1);
            mimic_two.insert(pointer, second_str);
            pointer = mimic_two.find(first_str);
        }
        new_file << mimic_two;
        mimic_two = "";
        std::getline(file, mimic_two);
    }
}


int main(int argc, char **argv)
{
    std::string     mimic;
    std::ifstream   file;
    int             num_where_dot;

    check_valid(argc, argv);
	mimic = argv[1];
	num_where_dot = mimic.find_last_of('.');
	mimic.insert(num_where_dot, ".replace");
	file.open(argv[1]);
	std::ofstream new_file(mimic);
	Class FILENAME(argv[2], argv[3]);
	if (!file.is_open() || !new_file.is_open())
	{
	    if (!file.is_open())
	    {
	        std::cout << "I can't find file" << std::endl;
	        exit(3);
	    }
	    std::cout << "I can't open file" << std::endl;
	    exit(4);
	}
	else
	    engine(file, new_file, FILENAME);
    file.close();
	new_file.close();
	return (0);
}