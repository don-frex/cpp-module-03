/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 12:59:32 by asaber            #+#    #+#             */
/*   Updated: 2023/11/17 16:13:13 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	name = "default";
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << name << " paramitrased constructor called\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destryed\n";
}

FragTrap::FragTrap(const FragTrap& other)
{
	this->name = other.name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "FragTrap " << name << "copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	this->name = other.name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "FragTrap " << name << "operator called\n";
	return(*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (!this->HitPoints || !this->EnergyPoints)
		std::cout << "FragTrap " << "can't move " << name << std::endl;
	else
	{
		std::cout << "FragTrap " << name << " attack " << target << ", causing " << AttackDamage << "points of damage!\n";
		EnergyPoints--;
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (!this->HitPoints)
		std::cout << "FragTrap " << "can't move " << name << std::endl;
	else
		std::cout << "FragTrap" << name << "get positive high fives" << std::endl;
}
