/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 16:43:44 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/26 14:04:08 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include <iostream>

class AMateria;
class Character : public ICharacter
{
private:
	std::string	name;
	AMateria	*inventory[4];
public:
	Character();
	Character(std::string const &name);
	Character(Character const &src);
	Character& operator=(Character const &src);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif