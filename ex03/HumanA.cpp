/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:57:31 by misimon           #+#    #+#             */
/*   Updated: 2023/04/18 16:51:22 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){}

HumanA::HumanA(std::string name, Weapon weapon) {
	this->_weapon = weapon;
	this->_name = name;
	std::cout << "\033[1;49;36m" << this->_name << " created  with " << this->_weapon.getType() << " !" << std::endl;
}

HumanA::HumanA(std::string name) {
	this->_name = name;
}

HumanA::~HumanA() {
	std::cout << "\033[1;49;31m" << this->_name << " delete !\033[0m" << std::endl;
}

void HumanA::attack() {
	std::cout << "\033[1;49;92m" << this->_name << " attack with their " << this->_weapon.getType() << "\033[0m" << std::endl;
}
