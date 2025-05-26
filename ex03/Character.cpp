/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:43:46 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/26 11:19:50 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	int	i;

	i = 0;
	while (i < 4)
		this->inventory[i++] = NULL;
	std::cout << "Character constructor" << std::endl;
}

Character::~Character()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		i++;
	}
	std::cout << "Character destructor" << std::endl;
}

Character::Character(std::string const &name) : name(name)
{
	int	i;

	i = 0;
	while (i < 4)
		this->inventory[i++] = NULL;
}

Character::Character(Character const &src) : name(src.name)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
		i++;
	}
	std::cout << "Character copy constructor" << std::endl;
}
Character& Character::operator=(Character const &src)
{
	int	i;

	i = 0;
	if (this != &src)
	{
		while (this->inventory[i])
		{
			if (this->inventory[i])
				delete this->inventory[i];
			i++;
		}
		this->name = src.getName();
		i = 0;
		while (this->inventory[i])
		{
			if (src.inventory[i])
				this->inventory[i] = src.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
			i++;
		}
	}
	return (*this);
}


std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	int	i;
	
	i = 0;
	if (!m)
		return ;
	while (i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			return ;
		}
		i++;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->inventory[idx])
		return ;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !this->inventory[idx])
		return ;
	this->inventory[idx]->use(target);
}
