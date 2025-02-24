/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:42:19 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 16:24:54 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat") {
	std::cout << "A Wrongcat just appeared." << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "A Wrongcat left home." << std::endl;
}

WrongCat::WrongCat(const WrongCat& c) {
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = c;
}

WrongCat&	WrongCat::operator=(const WrongCat& c) {
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &c)
		return (*this);
	return (*this);
}

void	WrongCat::makeSound() {
	std::cout << "OUIIIINNNNNN OUIINNNNNNNNN" << std::endl;
}

std::string	WrongCat::getType() {
	return (this->type);
}
