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
	for (int x = 0; x < 4; ++x)
		this->inventory[x] = NULL;
	// std::cout << "A MateriaSource is up" << std::endl;
}

MateriaSource::~MateriaSource() {
	for (int x = 0; x < 4; ++x)
		if (this->inventory[x])
			delete (this->inventory[x]);
	// std::cout << "A MateriaSource is down" << std::endl;
}

/// @brief Copie la Materia passée en paramètre et la stocke en mémoire afin de la cloner
/// plus tard. Tout comme le Character, la MateriaSource peut contenir 4 Materias
/// maximum. Ces dernières ne sont pas forcément uniques.
void	MateriaSource::learnMateria(AMateria* data) {
	for (int x = 0; x < 4; ++x) {
		if (!this->inventory[x]) {
			this->inventory[x] = data;
			return ;
		}
	}
	delete (data);
}

#include <stdio.h>

/// @brief Retourne une nouvelle Materia. Celle-ci est une copie de celle apprise précédemment par la MateriaSource 
/// et dont le type est le même que celui passé en paramètre. if (type->undefined) -> return (0);
AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int x = 0; x < 4; ++x)
		if (this->inventory[x] && this->inventory[x]->getType() == type)
			return (this->inventory[x]->clone());
	std::cout << "I don't know about " << type << " Materia. De facto, I cannot create it." << std::endl;
	return (0);
}






/// to complete
// MateriaSource::MateriaSource(const MateriaSource& ms) {
// 	if (this != &ms) {
// 		this->type = ms.type;


// }
// MateriaSource& MateriaSource::operator=(const MateriaSource& ms) {

// }
