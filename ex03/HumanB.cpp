/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:04:31 by misimon           #+#    #+#             */
/*   Updated: 2023/04/19 15:26:51 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name) {
	this->_name = name;
	std::cout << "\033[1;49;36m" << this->_name << " created !" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "\033[1;49;31m" << this->_name << " delete !\033[0m" << std::endl;
}

void HumanB::attack() {
	std::cout << "\033[1;49;92m" << this->_name << " attack with their " << this->_weapon->getType() << "\033[0m" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}