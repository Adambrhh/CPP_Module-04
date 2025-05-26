/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:35:19 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/26 14:04:56 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class IMateria;
class MateriaSource : public IMateriaSource
{
private:
	AMateria* inventory[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	MateriaSource& operator=(MateriaSource const &src);
	~MateriaSource();

	void		learnMateria(AMateria *src);
	AMateria*	createMateria(std::string const & type);
};

#endif