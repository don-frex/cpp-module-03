/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:15:35 by asaber            #+#    #+#             */
/*   Updated: 2023/11/17 16:01:35 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	int i;

	i = 1;
	ScavTrap a("A");
	
	while(i<= 50)
	{
		std::cout << i << std::endl;
		a.takeDamage(5);
		a.attack("ssss");
		a.guardGate();
		i++;
	}
	return (0);
}