/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:42:52 by juramos           #+#    #+#             */
/*   Updated: 2024/07/04 12:09:07 by juramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string	get_file_contents(char **argv)
{
	std::ifstream		input_file(argv[1]);
	std::stringstream	buffer;

	if (!input_file.is_open())
		return ("");
	buffer << input_file.rdbuf();
	return (buffer.str());
}

std::string	get_replaced_string(std::string file_contents, char **argv)
{
	size_t				last_pos = 0;
	size_t				first_pos = 0;
	std::stringstream	buffer;
	std::string			argv_two = argv[2];

	do 
	{
		last_pos = file_contents.find(argv_two, first_pos);
		buffer << file_contents.substr(first_pos, last_pos - first_pos);
		if (last_pos != std::string::npos)
			buffer << argv[3];
		buffer << std::flush;
		first_pos = last_pos + argv_two.length();
	} while (last_pos != std::string::npos);
	return (buffer.str());
}

int	main(int argc, char **argv)
{
	std::string		file_contents;
	std::string		file_replacement;

	if (argc != 4)
	{
		std::cerr << "Wrong number of parameters" << std::endl;
		return (1);
	}
	file_contents = get_file_contents(argv);
	if (file_contents.empty())
	{
		std::cerr << "The given file doesn't exist: " << argv[1] << std::endl;
		return (1);
	}
	file_replacement = argv[1];
	file_replacement.append(".replace");
	std::ofstream	output_file(file_replacement.c_str());
	if (!output_file.is_open())
	{
		std::cerr << "Issue opening " << file_replacement << std::endl;
		return (1);
	}
	output_file << get_replaced_string(file_contents, argv) << std::flush;
	return (0);
}
