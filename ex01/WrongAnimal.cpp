/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:49 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 13:39:52 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal has been constructed with default constructor" << std::endl;
}
WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal has been destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : type("WrongAnimal")
{
	if (this != &src)
		this->type = src.getType();
	std::cout << "WrongAnimal has been constructed with copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "The Wronganimal makes 'AAAAaaaaaAAAAAAaaaaaH!'" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return(this->type);
}
