/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:49 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 13:39:52 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal has been constructed with default constructor" << std::endl;
}
AAnimal::~AAnimal() 
{
	std::cout << "AAnimal has been destroyed" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) : type("AAnimal")
{
	if (this != &src)
		this->type = src.getType();
	std::cout << "AAnimal has been constructed with copy constructor" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	AAnimal::makeSound() const
{
	std::cout << "The Aanimal makes 'AAAAaaaaaAAAAAAaaaaaH!'" << std::endl;
}

std::string	AAnimal::getType() const
{
	return(this->type);
}
