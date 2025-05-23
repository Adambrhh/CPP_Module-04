/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:40:19 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 16:49:50 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();
	delete dog;
	delete cat;
	std::cout << std::endl;
	const int animalCount = 10;
	int index = 0;
	AAnimal* animals[animalCount];
	while (index < animalCount)
	{
		if (index < animalCount / 2)
			animals[index] = new Dog();
		else
			animals[index] = new Cat();
		index++;
	}
	index = 0;
	while (index < animalCount)
	{
		delete animals[index];
		index++;
	}
	return (0);
}
