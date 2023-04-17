/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:28:26 by misimon           #+#    #+#             */
/*   Updated: 2023/04/13 12:15:40 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *zombie = zombieHorde(10, "bijour");
	for(int i = 0; i < 10; i++) {
		zombie[i].announce();
	}
	delete[] zombie;
}

