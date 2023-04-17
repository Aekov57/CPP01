/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:04:31 by misimon           #+#    #+#             */
/*   Updated: 2023/04/17 17:09:17 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) {
	this->type = type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

void Weapon::getType() {
	std::cout << "Weapon type = " << this->type << std::endl;
}