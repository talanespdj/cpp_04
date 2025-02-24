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

Dog::Dog() : type("Dog") {
	std::cout << "A dog just appeared." << std::endl;
	br = new Brain();
}

Dog::~Dog() {
	std::cout << "A dog left home." << std::endl;
	delete (br);
}

Dog::Dog(const Dog& d) {
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = d;
}

Dog&	Dog::operator=(const Dog& d) {
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &d)
		return (*this);
	return (*this);
}

// void	Dog::makeSound() {
// 	std::cout << "Wouf wouf" << std::endl;
// }

std::string	Dog::getType() {
	return (this->type);
}