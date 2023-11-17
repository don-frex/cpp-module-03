/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:15:35 by asaber            #+#    #+#             */
/*   Updated: 2023/11/17 16:06:19 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap a("A");
	FragTrap b("B");

	int i;
	i = 1;
	while(i<=111)
	{
		std::cout << i <<std::endl;
		a.attack("B");
		b.takeDamage(5);
		i++;
	}	
	return (0);
}