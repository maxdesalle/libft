/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxdesalle <mdesalle@student.s19.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:47:48 by maxdesall         #+#    #+#             */
/*   Updated: 2021/11/02 10:35:56 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4 || !argv[1] || !argv[2] || !argv[3])
	{
		std::cerr << "Argument error" << std::endl;
		return (1);
	}

	std::string const	file = argv[1];
	std::ifstream		infile(file);

	if (!infile.is_open())
	{
		std::cerr << "File could not be opened" << std::endl;
		infile.close();
		return (1);
	}


	size_t				pos;
	size_t				old_pos;
	std::string			buffer;
	std::string const	str1 = argv[2];
	std::string const	str2 = argv[3];
	std::ofstream		outfile(file + ".replace");

	if (str1.empty() || str2.empty())
	{
		std::cerr << "Invalid string" << std::endl;
		infile.close();
		return (1);
	}

	while (std::getline(infile, buffer))
	{
		old_pos = 0;
		if (buffer.find(str1, old_pos) != std::string::npos)
		{
			while ((pos = buffer.find(str1, old_pos)) != std::string::npos)
			{
				outfile << buffer.substr(old_pos, pos - old_pos);
				outfile << str2;
				old_pos = pos + str1.length();
			}
		}
		else
			outfile << buffer;
		outfile << std::endl;
	}

	infile.close();
	outfile.close();

	return (0);
}
