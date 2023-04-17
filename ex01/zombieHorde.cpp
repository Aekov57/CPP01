/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:29:07 by misimon           #+#    #+#             */
/*   Updated: 2023/04/17 16:14:41 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie[i].setName(name + "[" + std::to_string(i) + "]");
	return (zombie);
}