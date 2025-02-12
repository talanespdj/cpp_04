/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 00:55:53 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/12 02:05:37 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal {
	
	public :
		Dog();
		~Dog();
		Dog(const Dog& d);
		Dog& operator=(const Dog& d);

		void	makeSound();
};

#endif
