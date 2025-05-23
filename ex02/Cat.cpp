/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:51 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 16:47:39 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << "Cat has been constructed with default constructor" << std::endl;
}
Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat::Cat(Cat const &src) : AAnimal(src)
{
	this->brain = new Brain(*src.brain);
	this->type = src.getType();
	std::cout << "Cat has been constructed with copy constructor" << std::endl;
}

Cat& Cat::operator=(Cat const &src)
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

void	Cat::makeSound() const
{
	std::cout << "The cat makes 'meeeEEEEEOOOOooow!" << std::endl;
}