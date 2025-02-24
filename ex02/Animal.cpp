/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 02:06:29 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/22 21:02:51 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

Animal::Animal() : type("undefined") {
	std::cout << "Animal Default constructor called." << std::endl;
};

Animal::~Animal() {
	std::cout << "Animal Default deconstructor called." << std::endl;
};

Animal::Animal(const Animal &a) {
        std::cout << "An Animal copy just appeared." << std::endl;
        *this = a;
}

Animal&	Animal::operator=(const Animal& a) {
	std::cout << "An Animal copy assignment appeared." << std::endl;
	if (this != &a)
		this->type = a.type;
	return (*this);
}

void	Animal::setType(std::string data) {
	this->type = data;
}

std::string	Animal::getType() {
	return (this->type);
}
