/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:10:25 by misimon           #+#    #+#             */
/*   Updated: 2023/04/25 16:21:06 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void replaceFile(std::string inContent, char **av)
{
	int temp;
	std::ofstream outFiles(std::string(av[1]) + ".replace");
	if(outFiles.fail())
		return ;
	for(size_t i = 0; i < inContent.size(); i++)
	{
		temp = inContent.find(av[2], i);
		if(temp != -1 && temp == i)
		{
			outFiles << av[3];
			i += std::string(av[3]).size();
		}
		else
			outFiles << inContent[i];
	}
	outFiles.close();
}

int main(int ac, char **av)
{
	std::ifstream inFiles;
	std::string inContent;
	std::string	temp;

	if (ac != 4)
	{
		std::cerr << "⛔\033[1;49;31mERROR: wrong exec syntax [./replace <file> oldWord newWord] !\033[0m" << std::endl;
		return(EXIT_FAILURE);
	}
	inFiles.open(av[1]);
	if (inFiles.fail())
	{
		std::cerr << "⛔\033[1;49;31mERROR: " << av[1] << ": No such file or directory !\033[0m" << std::endl;
		return(EXIT_FAILURE);
	}
	while (std::getline(inFiles, temp))
	{
		inContent += temp;
		if(!inFiles.eof())
			inContent += "\n";
	}
	std::cout << inContent << std::endl;
	inFiles.close();
	replaceFile(inContent, av);
	return (EXIT_SUCCESS);
}