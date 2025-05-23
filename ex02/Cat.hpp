/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:41:53 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 16:47:30 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(Cat const &src);
	Cat& operator=(Cat const &src);
	~Cat();
	void	makeSound() const;
};

#endif