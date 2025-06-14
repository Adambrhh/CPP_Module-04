/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:18:09 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/26 07:45:00 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &src);
	Cure(std::string const & type);
	Cure& operator=(Cure const &src);
	~Cure();
	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif