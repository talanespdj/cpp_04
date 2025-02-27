/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:10:50 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 19:12:16 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character() {
	// std::cout << "A new unknown Character has entered" << std::endl;
	for (int x = 0; x < 4; ++x)
		this->inventory[x] = NULL;
	for (int x = 0; x < 50; ++x)
		this->floor[x] = NULL;
}

Character::Character(std::string name) {
	this->name = name;
	for (int x = 0; x < 4; ++x)
		this->inventory[x] = NULL;
	for (int x = 0; x < 50; ++x)
		this->floor[x] = NULL;
	// std::cout << "A new Character " << getName() << " has entered" << std::endl;
}

Character::~Character() {
	for (int x = 0; x < 4; ++x)
		if (this->inventory[x])
			delete (this->inventory[x]);
	for (int x = 0; x < 50; ++x)
		if (this->floor[x])
			delete (this->floor[x]);
	// std::cout << "A Character has left" << std::endl;
}

Character::Character(const Character &i) {
	// std::cout << "Character Copy constructor called" << std::endl;
	
	// ici
	*this = i;
}

Character&	Character::operator=(const Character &i) {
	// std::cout << "Character Copy assignment operator called" << std::endl;
	if (this != &i) {
		this->name = i.name;
		for (int x = 0; x < 4; ++x) {
			if (this->inventory[x])
			{
				delete (this->inventory[x]);
				this->inventory[x] = NULL;
			}
			if (i.inventory[x])
				this->inventory[x] = i.inventory[x]->clone();
			else
				this->inventory[x] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name);
}

void	Character::equip(AMateria* m) {
	for (int x = 0; x < 4; ++x) {
		if (!this->inventory[x]) {
			this->inventory[x] = m;
			return ;
		}
	}
	std::cout << "Couldn't equip " << m->getType() << ", the inventory is full" << std::endl;
	for (int x = 0; x < 50; ++x) {
		if (!this->floor[x]) {
			this->floor[x] = m;
			return ;
		}
	}
	std::cout << "The Materia can neither be used or stored, its gonna disappear." << std::endl;
	delete (m);
}

void	Character::unequip(int idx) {
	if ((idx < 0 || idx > 3) || !this->inventory[idx]) {
		std::cout << "There is no Materia at " << idx << " index" << std::endl;
		return ;
	}
	for (int x = 0; x < 50; ++x) {
		if (!this->floor[x]) {
			this->floor[x] = this->inventory[idx];
			this->inventory[idx] = NULL;
			return ;
		}
	}
	std::cout << "Too many Materia on the ground." << std::endl;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "The inventory can only contain 4 Materia, index // 0 to 3" << std::endl;
		return ;
	}
	if (!this->inventory[idx])
		std::cout << "Nothing to use for " << idx << " index" << std::endl;
	else
		this->inventory[idx]->use(target);
}

AMateria	*Character::getMateria(int idx) {
	if (this->inventory[idx]) {
		return (this->inventory[idx]);
	}
	std::cout << "There is no Materia at " << idx << " index" << std::endl;
	return (0);
}