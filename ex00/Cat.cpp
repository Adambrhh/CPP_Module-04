/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:51 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 13:38:36 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat has been constructed with default constructor" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Cat has been destroyed" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	this->type = "Cat";
	std::cout << "Cat has been constructed with copy constructor" << std::endl;
}

Cat& Cat::operator=(Cat const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "The cat makes 'meeeEEEEEOOOOooow!" << std::endl;
}