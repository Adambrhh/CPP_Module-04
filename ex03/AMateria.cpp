/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 14:55:30 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/26 11:19:32 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
	this->type = src.getType();
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria& AMateria::operator=(AMateria const &src)
{
	if (this != &src)
	{
		this->type = src.getType();
	}
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* uses a generic Materia on " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}