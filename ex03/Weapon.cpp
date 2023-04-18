/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:04:31 by misimon           #+#    #+#             */
/*   Updated: 2023/04/18 17:00:15 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type): _type(type) {
}

void Weapon::setType(std::string type) {
	this->_type = type;
}

std::string Weapon::getType() {
	return(this->_type);
}

Weapon::~Weapon() {}