/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 15:19:52 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/26 07:48:03 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class ICharactere;

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &src);
	Ice(std::string const & type);
	Ice& operator=(Ice const &src);
	~Ice();
	std::string const & getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif