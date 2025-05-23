/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:16:59 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 16:02:49 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain has been constructed with default constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain has been destroyed" << std::endl;
}

Brain::Brain(Brain const &src)
{
	if (this != &src)
		this->ideas[100] = src.ideas[100];
	std::cout << "Brain has been constructed with copy constructor" << std::endl;
}

Brain& Brain::operator=(Brain const &src)
{
	if (this != &src)
		this->ideas[100] = src.ideas[100];
	return (*this);
}

std::string	Brain::getType() const
{
	return(this->ideas[100]);
}
