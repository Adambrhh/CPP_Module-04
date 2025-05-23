/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:55 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 13:40:02 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog has been constructed with default constructor" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	if (this != &src)
		this->type = src.getType();
	std::cout << "Dog has been constructed with copy constructor" << std::endl;
}

Dog& Dog::operator=(Dog const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "The dog makes 'WOOOOOAAAaaaaf!" << std::endl;
}