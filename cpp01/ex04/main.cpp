/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:42:52 by juramos           #+#    #+#             */
/*   Updated: 2024/06/11 17:56:23 by juramos          ###   ########.fr       */
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

	do 
	{
		last_pos = file_contents.find(argv[2], first_pos);
		buffer << file_contents.substr(first_pos, last_pos - first_pos);
		if (last_pos != std::string::npos)
			buffer << argv[3];
		buffer << std::flush;
		first_pos = last_pos + std::strlen(argv[2]);
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
		return (EXIT_FAILURE);
	}
	file_contents = get_file_contents(argv);
	if (file_contents.empty())
	{
		std::cerr << "The given file doesn't exist: " << argv[1] << std::endl;
		return (EXIT_FAILURE);
	}
	file_replacement = argv[1];
	file_replacement.append(".replace");
	std::ofstream	output_file(file_replacement);
	if (!output_file.is_open())
	{
		std::cerr << "Issue opening " << file_replacement << std::endl;
		return (EXIT_FAILURE);
	}
	output_file << get_replaced_string(file_contents, argv) << std::flush;
	return (EXIT_SUCCESS);
}
