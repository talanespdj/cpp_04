/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 00:55:53 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/12 02:05:48 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class	Cat : public Animal {
	
	public :
		Cat();
		~Cat();
		Cat(const Cat& d);
		Cat& operator=(const Cat& d);

		void	makeSound();
};

#endif
