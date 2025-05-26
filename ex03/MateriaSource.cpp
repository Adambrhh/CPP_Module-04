/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:35:22 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/26 11:20:20 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i;

	i = 0;
	while (i < 4)
		this->inventory[i++] = NULL;
	std::cout << "MateriaSource constructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
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
	std::cout << "MateriaSource copy constructor" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &src)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
		{
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
		if (src.inventory[i])
			this->inventory[i] = src.inventory[i]->clone();
		i++;
	}
	std::cout << "MateriaSource copy constructor" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		i++;
	}
	std::cout << "MateriaSource destructor" << std::endl;
}

void		MateriaSource::learnMateria(AMateria *src)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = src;
			return ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (this->inventory[i] && this->inventory[i]->getType() == type)
			return this->inventory[i]->clone();
		i++;
	}
	return (NULL);
}
