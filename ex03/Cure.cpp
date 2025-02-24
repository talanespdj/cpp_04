/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:50:04 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 19:50:07 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cure.hpp"
#include "iostream"

Cure::Cure() : AMateria("cure") {
	std::cout << "One Materia cure appeared" << std::endl;
}

Cure::~Cure() {
	std::cout << "One Materia cure has been used" << std::endl;
}

Cure::Cure(const Cure &i) {
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = i;
}

Cure&	Cure::operator=(const Cure &i) {
	std::cout << "Cure Copy assignment operator called" << std::endl;
	if (this != &i) {
		this->type = i.type;
	}
	return (*this);
}
