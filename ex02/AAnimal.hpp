/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:47 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 16:43:37 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal();
	AAnimal(AAnimal const &src);
	AAnimal& operator=(AAnimal const &src);
	virtual ~AAnimal();
	std::string	getType() const;
	virtual void	makeSound() const = 0;
};

#endif