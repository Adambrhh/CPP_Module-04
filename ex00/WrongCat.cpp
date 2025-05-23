/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:51 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 13:38:36 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat has been constructed with default constructor" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat has been destroyed" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	this->type = "WrongCat";
	std::cout << "WrongCat has been constructed with copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "The Wrongcat makes 'meeeEEEEEOOOOooow!" << std::endl;
}