/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 02:06:29 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 16:24:37 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("undefined") {
	std::cout << "WrongAnimal Default constructor called." << std::endl;
};

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Default deconstructor called." << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &a) {
        std::cout << "An WrongAnimal copy just appeared." << std::endl;
        *this = a;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& a) {
	std::cout << "An WrongAnimal copy assignment appeared." << std::endl;
	if (this != &a)
		this->type = a.type;
	return (*this);
}

void	WrongAnimal::makeSound() {
	std::cout << "Im a WrongAnimal but I deserve to live." << std::endl;
}

void	WrongAnimal::setType(std::string data) {
	this->type = data;
}

std::string	WrongAnimal::getType() {
	return (this->type);
}
