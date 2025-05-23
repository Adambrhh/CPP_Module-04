/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:57 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 16:47:27 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain* brain;
public:
	Dog();
	Dog(Dog const &src);
	Dog& operator=(Dog const &src);
	~Dog();
	void	makeSound() const;
};

#endif