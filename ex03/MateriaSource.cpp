/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 00:18:14 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/25 00:23:51 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()  {
	std::cout << "A MateriaSource is up" << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "A MateriaSource is down" << std::endl;
}

MateriaSource(const MateriaSource& ms) {
	if (this != &ms) {
		this->type = ms.type;


}
	MateriaSource& operator=(const MateriaSource& ms);

