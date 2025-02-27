/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:39:20 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/22 20:51:35 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() : Animal(), type("Dog"), br(new Brain()) {
	std::cout << "A dog just appeared." << std::endl;
}

Dog::~Dog() {
	std::cout << "A dog left home." << std::endl;
	delete (br);
}

Dog::Dog(const Dog& d) : Animal(), br(NULL) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = d;
}

Dog&	Dog::operator=(const Dog& d) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &d) {
		this->type = d.type;
		if (this->br && this->br != d.getBrain())
			delete (this->br);
		this->br = new Brain(*d.br);
	}
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Wouf wouf" << std::endl;
}

std::string	Dog::getType() {
	return (this->type);
}

Brain		*Dog::getBrain() const {
	return (this->br);
}