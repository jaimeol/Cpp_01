/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:21:04 by jolivare          #+#    #+#             */
/*   Updated: 2024/06/10 18:35:55 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "\033[1;31mInvalid number of zombies\033[0m" << std::endl;
		return 0;
	}
	
	Zombie *zombies;
	
	zombies = new Zombie[N];
	
	for (int i = 0; i < N; ++i)
		zombies[i].setName(name);
	
	return zombies;
}