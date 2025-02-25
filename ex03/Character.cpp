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

}

Character::Character(std::string name) {
	this->name = name;
	for (int x = 0; x < 4; ++x)
		this->inventory[x] = NULL;
	// std::cout << "A new Character " << getName() << " has entered" << std::endl;
}

Character::~Character() {
	for (int x = 0; x < 4; ++x)
		if (this->inventory[x])
			delete (this->inventory[x]);
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
	// m = NULL;
	std::cout << "Couldn't equip " << m->getType() << ", the inventory is full" << std::endl;
}

void	Character::unequip(int idx) {
	if ((idx < 0 || idx > 3) || !this->inventory[idx]) {
		std::cout << "There is no Materia at " << idx << " index" << std::endl;
		return ;
	}
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target) {
	if (!this->inventory[idx])
		std::cout << "There is no Materia at " << idx << " index" << std::endl;
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