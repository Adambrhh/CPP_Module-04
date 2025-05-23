/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:47 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 13:43:20 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal& operator=(WrongAnimal const &src);
	~WrongAnimal();
	std::string	getType() const;
	void	makeSound() const;
};

#endif