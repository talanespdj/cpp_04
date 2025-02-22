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

Cat::Cat() : type("Cat") {
	std::cout << "A cat just appeared." << std::endl;
}

Cat::~Cat() {
	std::cout << "A cat left home." << std::endl;
}

void	Cat::makeSound() {
	std::cout << "Miaaaou miaaaaouuu" << std::endl;
}
