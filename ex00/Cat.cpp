/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 01:03:57 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/12 02:22:10 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"
#include <iostream>

Cat::Cat() : type("Cat") {
	std::cout << "A Cat just appeared" << std::endl;
}

Cat::~Cat() {
	std::cout << "cat - I leave this evil world" << std::endl;
}

Cat::Cat(const Cat &c) {
	this->type = c.type;
	std::cout << "A copy Cat just appeared" << std::endl;
}

Cat&	Cat::operator=(const Cat& c) {
	std::cout << "A copy assignment Cat appeared" << std::endl;
	*this = c;
}

void	Cat::makeSound() {
	std::cout << "Miaaouuuu" << std::endl;
}
