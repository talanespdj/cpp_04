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
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	// for (int x = 0; x < 10; ++x) {
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("ice");
	// 	me->equip(tmp);
	// 	tmp = src->createMateria("cure");
	// 	me->equip(tmp);
	// 	me->unequip(0);
	// 	me->unequip(1);
	// 	me->unequip(2);
	// 	me->unequip(3);
	// }


	// me->use(3, *bob);
	// me->use(4, *bob);
	// me->use(5, *bob);
	// me->use(1000, *bob);
	// me->use(-50, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}



/*
int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	for (int x = 0; x < 100; ++x) {
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		// me->unequip(0);
		// me->unequip(1);
		// me->unequip(2);
		// me->unequip(3);
	}


	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	
	delete bob;
	delete me;
	delete src;
}*/