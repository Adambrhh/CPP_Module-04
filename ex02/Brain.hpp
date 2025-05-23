/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarahho <abarahho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:17:02 by abarahho          #+#    #+#             */
/*   Updated: 2025/05/23 15:44:47 by abarahho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
public:
	std::string	ideas[100];
	Brain();
	Brain(Brain const &src);
	Brain& operator=(Brain const &src);
	std::string	getType() const;
	~Brain();
};

#endif