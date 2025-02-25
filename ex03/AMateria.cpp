/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:31:47 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 17:31:56 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

AMateria::AMateria(std::string const data) : type(data) {
	// std::cout << "Amateria available" << std::endl;
}

AMateria::~AMateria() {
	// std::cout << "An Amateria has disappeared" << std::endl;
}


AMateria::AMateria(AMateria const &a) {
	this->type = a.type;

}

AMateria& AMateria::operator=(const AMateria &a) {
	if (this != &a) {
		type = a.type;
	}
	return (*this);

}

std::string const & AMateria::getType() const {
	return (this->type);
}

// virtual	AMateria* Amateria::clone() {
// 	Amateria	*clone;

// 	clone = this;
// 	return (clone);
// }

void	AMateria::use(ICharacter& target) {
	std::cout << "Attacking " << target.getName() << " with something" << std::endl;

}