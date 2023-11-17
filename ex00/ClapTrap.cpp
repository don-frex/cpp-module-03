/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:49:47 by asaber            #+#    #+#             */
/*   Updated: 2023/11/17 15:40:18 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void)
{
	name = "default";
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "ClapTrap " << name << " paramitrased constructor called\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destryed\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "ClapTrap " << name << "copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->HitPoints = other.HitPoints;
	this->EnergyPoints = other.EnergyPoints;
	this->AttackDamage = other.AttackDamage;
	std::cout << "ClapTrap " << name << "operator called\n";
	return(*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->HitPoints || !this->EnergyPoints)
		std::cout << "ClapTrap " << "can't move " << name << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " attack " << target << ", causing " << AttackDamage << "points of damage!\n";
		EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int) amount > HitPoints)
		HitPoints = 0;
	else
		HitPoints -= amount;
	std::cout << "ClapTrap " << name << " taken " << amount << ", resault now: " << HitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->HitPoints || !this->EnergyPoints)
		std::cout << "ClapTrap " << "can't move " << name << std::endl;
	else
	{
		std::cout << "ClapTrap " << name << " repaired his health\n";
		HitPoints += amount;
		EnergyPoints--;
	}
}
