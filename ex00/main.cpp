/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:17:48 by misimon           #+#    #+#             */
/*   Updated: 2023/04/13 10:24:21 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie("bijour");
	zombie.announce();
	Zombie *mort = newZombie("jean peplus");
	mort->announce();
	randomChump("Hector");
	delete(mort);
	return(0);
}