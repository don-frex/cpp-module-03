/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:15:35 by asaber            #+#    #+#             */
/*   Updated: 2023/11/17 15:53:31 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap ct("Adnane");
	int i;

	i=1;
	while(i<= 11)
	{
		std::cout << i <<std::endl;
		ct.beRepaired(44);
		ct.attack("sss");
		
	i++;
	}
	return (0);
}
