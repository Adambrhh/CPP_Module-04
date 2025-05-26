/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:18:07 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/24 15:24:01 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure constructor" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria (src)
{
	std::cout << "Cure copy constructor" << std::endl;
}

Cure::Cure(std::string const & type)
{
	this->type = type;
}

Cure& Cure::operator=(Cure const &src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

std::string const & Cure::getType() const
{
	return (this->type);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

Cure::~Cure()
{
	std::cout << "Cure destructor" << std::endl;
}