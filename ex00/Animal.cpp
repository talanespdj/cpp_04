/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 02:06:29 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/12 02:26:10 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"

Animal::Animal() : type("undefined"{
	std::cout << "Animal Default constructor called" << std::endl;
};

Animal::~Animal() {
	std::cout << "Animal Default deconstructor called" << std::endl;
};

Animal::Animal(const Animal &a) {
        this->type = a.type;
        std::cout << "A copy Animal just appeared" << std::endl;
}

Animal&	Animal::operator=(const Animal& a) {
        std::cout << "A copy assignment Animal appeared" << std::endl;
        *this = c;
}

void	Animal::makeSound() {
	std::cout << "Who am I to make a sound pls think" << std::endl;
}

void	Animal::setType(std::string data) {
	this->type = data;
}

const std::string	Animal::getType() {
	return (this->type);
}
