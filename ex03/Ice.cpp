/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:20:19 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/24 15:23:26 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	std::cout << "Ice constructor" << std::endl;
}

Ice::Ice(std::string const & type)
{
	this->type = type;
}

Ice& Ice::operator=(Ice const &src)
{
	if (this != &src)
		this->type = src.getType();
	return (*this);
}

std::string const & Ice::getType() const
{
	return (this->type);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}