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
#include <iostream>

Dog::Dog() : type("Dog") {
	std::cout << "A dog just appeared." << std::endl;
}

Dog::~Dog() {
	std::cout << "A dog left home." << std::endl;
}

void	Dog::makeSound() {
	std::cout << "Wouf wouf" << std::endl;
}
