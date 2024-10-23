/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:25:22 by jolivare          #+#    #+#             */
/*   Updated: 2024/06/10 18:34:53 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie  *zombies;
	int n = 0;
	
	zombies = zombieHorde(n, "Pepe");
	for (int i = 0; i < n; ++i)
		zombies[i].announce();
	
	if (zombies)
		delete[] zombies;
	
	return 0;
}