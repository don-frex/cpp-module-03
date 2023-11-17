/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:30:58 by asaber            #+#    #+#             */
/*   Updated: 2023/11/17 00:30:45 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	name = "default";
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	HitPoints = 50;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap " << name << " paramitrased constructor called\n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destryed\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	this->name = other.name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "ScavTrap " << name << "copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	this->name = other.name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "ScavTrap " << name << "operator called\n";
	return(*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->HitPoints || !this->EnergyPoints)
		std::cout << "ScavTrap " << "can't move " << name << std::endl;
	else
	{
		std::cout << "ScavTrap " << name << " attack " << target << ", causing " << AttackDamage << " points of damage!\n";
		EnergyPoints--;
	}
}

void 	ScavTrap::guardGate(void)
{
	if (!this->HitPoints || !this->EnergyPoints)
		std::cout << "ScavTrap " << "can't move " << name << std::endl;
	else
		std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
