/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:49 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 13:39:52 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal has been constructed with default constructor" << std::endl;
}
Animal::~Animal() 
{
	std::cout << "Animal has been destroyed" << std::endl;
}

Animal::Animal(Animal const &src) : type("Animal")
{
	if (this != &src)
		this->type = src.getType();
	std::cout << "Animal has been constructed with copy constructor" << std::endl;
}

Animal& Animal::operator=(Animal const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "The animal makes 'AAAAaaaaaAAAAAAaaaaaH!'" << std::endl;
}

std::string	Animal::getType() const
{
	return(this->type);
}
