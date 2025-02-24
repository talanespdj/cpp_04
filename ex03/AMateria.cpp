/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:31:47 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 17:31:56 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria() {
	std::cout << "Amateria available" << std::endl;
}
AMateria::~AMateria() {
	std::cout << "An Amateria has disappeared" << std::endl;
}
AMateria(AMateria const &a) {

}

AMateria operator=(AMateria const &a) {

}

AMateria(std::string const & type) {
	
}
