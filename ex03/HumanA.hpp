/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:11:10 by misimon           #+#    #+#             */
/*   Updated: 2023/04/18 16:22:18 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

# include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon _weapon;
public:
	HumanA();
	HumanA(std::string name);
	HumanA(std::string name, Weapon weapon);
	~HumanA();
	void attack();
};

#endif