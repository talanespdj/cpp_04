/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:10:50 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 19:12:16 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character(std::string name) {
	std::cout << "A new Character has entered" << std::endl;
	this->name = name;
}

Character::~Character() {
	std::cout << "A Character has left" << std::endl;
}


Character::Character(const Character &i) {
	std::cout << "Character Copy constructor called" << std::endl;
	*this = i;
}

Character&	Character::operator=(const Character &i) {
	std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &i) {
		this->name = i.name;
	}
	return (*this);
}

std::string const & Character::getName() {
	return (this->name);
}