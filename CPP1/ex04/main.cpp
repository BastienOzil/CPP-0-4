/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bozil <bozil@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:08:07 by bozil             #+#    #+#             */
/*   Updated: 2026/01/26 14:12:21 by bozil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}

	std::ifstream	infile(filename.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
		return (1);
	}

	std::string	content;
	std::string	line;
	bool		first = true;

	while (std::getline(infile, line))
	{
		if (!first)
			content += "\n";
		content += line;
		first = false;
	}

	if (infile.bad())
	{
		std::cerr << "Error: Failed to read file '" << filename << "'" << std::endl;
		infile.close();
		return (1);
	}
	infile.close();

	std::string	replaced = replaceAll(content, s1, s2);

	std::string		outfilename = filename + ".replace";
	std::ofstream	outfile(outfilename.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error: Could not create file '" << outfilename << "'" << std::endl;
		return (1);
	}

	outfile << replaced;

	if (outfile.fail())
	{
		std::cerr << "Error: Failed to write to file '" << outfilename << "'" << std::endl;
		outfile.close();
		return (1);
	}

	outfile.close();
	std::cout << "File '" << outfilename << "' created successfully" << std::endl;
	return (0);
}
