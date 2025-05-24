/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:35:19 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/24 17:01:01 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	MateriaSource& operator=(MateriaSource const &src);
	~MateriaSource();
	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif