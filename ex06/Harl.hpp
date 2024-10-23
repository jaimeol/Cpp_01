/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jolivare < jolivare@student.42mad.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:36:33 by jolivare          #+#    #+#             */
/*   Updated: 2024/09/27 14:53:22 by jolivare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		
		void complain(std::string const &level) const;
	
	private:
		static const std::string mood[];

		void debug(void) const;
		void info(void) const;
		void warning(void) const;
		void error(void) const;
};
