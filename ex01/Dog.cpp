/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:55 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 16:40:28 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->brain = new Brain();
	this->type = "Dog";
	std::cout << "Dog has been constructed with default constructor" << std::endl;
}
Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog has been destroyed" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	this->brain = new Brain(*src.brain);
	this->type = src.getType();
	std::cout << "Dog has been constructed with copy constructor" << std::endl;
}

Dog& Dog::operator=(Dog const &src)
{
	if (this != &src)
	{
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*src.brain);
		this->type = src.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "The dog makes 'WOOOOOAAAaaaaf!" << std::endl;
}