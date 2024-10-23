/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:11 by jolivare          #+#    #+#             */
/*   Updated: 2024/06/10 18:24:24 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("")
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie \"" << this->_name;
	std::cout << "\" has been destroyed!" << std::endl;
	return ;
}

void Zombie::setName(std::string const &name)
{
	this->_name = name;
}

void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}