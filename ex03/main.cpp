/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:16:48 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 19:17:20 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Ice.hpp"
#include "Cure.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("feu");
	tmp = src->createMateria("feu");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(1);
	me->unequip(2);
	me->unequip(3);
	ICharacter* bob = new Character("bob");

	// me->unequip(0);
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

inline void	printHeader(const std::string &message)
{
	std::cout << "########## " << message << " ##########"  << std::endl;
}

inline void	printSeperate(const std::string &message)
{
	std::cout << "--- " << message << " ---"  << std::endl;
}

inline void	printSub(const std::string &message)
{
	std::cout << ">> " << message <<  std::endl;
}

// int	main(void)
// {
// 	printSeperate("Création de 2 Character");
// 	printSub("John et Bill");
// 	ICharacter	*john = new Character("John");
// 	ICharacter	*bill = new Character("Bill");
// 	std::cout << std::endl;

// 	printSeperate("Création de 1 IMateriaSource");
// 	printSub("source");
// 	IMateriaSource	*source = new MateriaSource();
// 	std::cout << std::endl;

// 	printSeperate("Création de 2 Materias");
// 	printSub("Ice et Cure");
// 	Ice		*ice = new Ice();
// 	Cure	*cure = new Cure();
// 	std::cout << std::endl;

// 	printSeperate("Ajout des Materia a la source");
// 	printSub("Ice et Cure");
// 	source->learnMateria(ice);
// 	source->learnMateria(cure);
// 	std::cout << std::endl;

// 	printSeperate("John apprends les 2 Materias");
// 	printSub("Cure [index 0] et Ice [index 1]");
// 	john->equip(source->createMateria("cure"));
// 	john->equip(source->createMateria("ice"));
// 	std::cout << std::endl;

// 	printSeperate("Bill apprends les 2 Materias");
// 	printSub("Cure [index 0] et Ice [index 1]");
// 	bill->equip(source->createMateria("cure"));
// 	bill->equip(source->createMateria("ice"));
// 	std::cout << std::endl;

// 	printSeperate("John utilise les Materia a Index 1 sur Bill");
// 	printSub("Ice [index 1] normalement");
// 	john->use(1, *bill);
// 	std::cout << std::endl;

// 	printSeperate("John utilise les Materia a Index 0 sur lui-même");
// 	printSub("Cure [index 0] normalement");
// 	john->use(0, *john);
// 	std::cout << std::endl;

// 	printSeperate("Bill utilise les Materia a Index 1 sur John");
// 	printSub("Ice [index 1] normalement");
// 	bill->use(1, *john);
// 	std::cout << std::endl;

// 	printSeperate("Bill utilise les Materia a Index 0 sur lui-même");
// 	printSub("Cure [index 0] normalement");
// 	bill->use(0, *bill);
// 	std::cout << std::endl;

// 	printSeperate("Tentative de use() a mauvais index");
// 	printSub("[index 3]");
// 	john->use(3, *bill);
// 	std::cout << std::endl;

// 	printSeperate("unequip() John");
// 	printSub("[index 1]");
// 	AMateria *tmp0 = john->getMateria(1);
// 	john->unequip(1);
// 	std::cout << std::endl;

// 	printSeperate("Tentative de unequip() a index deja vide");
// 	printSub("[index 1] - John");
// 	john->unequip(1);
// 	std::cout << std::endl;

// 	printSeperate("unequip() Bill");
// 	printSub("[index 0]");
// 	AMateria *tmp1 = bill->getMateria(0);
// 	bill->unequip(0);
// 	std::cout << std::endl;

// 	printSeperate("Tentative de unequip() a mauvais index");
// 	printSub("[index 5] - Bill");
// 	bill->unequip(5);
// 	std::cout << std::endl;

// 	delete (tmp0);
// 	delete (tmp1);
// 	delete (source);
// 	delete (bill);
// 	delete (john);

// 	return (0);
// }