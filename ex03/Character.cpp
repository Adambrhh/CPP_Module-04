/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:43:46 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/24 17:28:40 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor" << std::endl;
}

Character::Character(Character const &src)
{
	this->name = src.getName();
}
Character& Character::operator=(Character const &src)
{
	if (this != &src)
	{
		this->name = src.getName();
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor" << std::endl;
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter& target)
{
	
}
