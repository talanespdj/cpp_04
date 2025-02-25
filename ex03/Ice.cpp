/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:43:36 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 19:49:35 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"
#include "iostream"

Ice::Ice() : AMateria("ice") {
	std::cout << "One Materia ice appeared" << std::endl;
}

Ice::~Ice() {
	std::cout << "One Materia ice has been used" << std::endl;
}

Ice::Ice(const Ice &i): AMateria(i.type) {
	std::cout << "Ice Copy constructor called" << std::endl;
}

// Ice&	Ice::operator=(const Ice &i) {
// 	std::cout << "Ice Copy assignment operator called" << std::endl;
// 	if (this != &i) {
// 		this->type = i.type;
// 	}
// 	return (*this);
// }



void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}