/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:42:19 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/22 20:51:55 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : type("Cat") {
	std::cout << "A cat just appeared." << std::endl;
	br = new Brain();
}

Cat::~Cat() {
	std::cout << "A cat left home." << std::endl;
	delete (br);
}

Cat::Cat(const Cat& c) {
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = c;
}

Cat&	Cat::operator=(const Cat& c) {
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &c)
		return (*this);
	return (*this);
}

void	Cat::makeSound() {
	std::cout << "Miaaaou miaaaaouuu" << std::endl;
}

std::string	Cat::getType() {
	return (this->type);
}
