/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 00:52:09 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/12 02:26:29 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal {

	protected :
		std::string	type;
		
	public :
		Animal();
		~Animal();
		Animal(const Animal& a);
		Animal& operator=(const Animal& a);

		void	makeSound();

		std::string	getType();
		// void	setType();
};

#endif
