/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 12:15:51 by misimon           #+#    #+#             */
/*   Updated: 2023/04/17 16:34:51 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "L'adresse de la string en mémoire: " << &brain << std::endl;
	std::cout << "L'adresse stocké dans stringPTR: " << stringPTR << std::endl;
	std::cout << "L'adresse stocké dans stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "La valeur de la string: " << brain << std::endl;
	std::cout << "La valeur pointé par stringPTR: " << *stringPTR << std::endl;
	std::cout << "La valeur pointé par stringREF: " << stringREF << std::endl;

	return(0);
}
