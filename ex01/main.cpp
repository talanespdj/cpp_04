/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 11:44:28 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 11:44:30 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int	main(void)
// {
// 	int	n = 20;
// 	Animal	*tab[n];

// 	for (int x = 0; x < n; ++x) {
// 		if (x < n/2)
// 			tab[x] = new Dog;
// 		else
// 			tab[x] = new Cat;
// 	}

// 	for (int x = 0; x < n; ++x) {
// 		delete (tab[x]);
// 	}
	
// 	return (0);

// }

// int	main(void)
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();


// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }

#define NB_ANIMALS 4


void	arrayTest(void)
{
	Animal *tab[NB_ANIMALS + 1];
	tab[NB_ANIMALS] = NULL;

	for (int i = 0; i < (NB_ANIMALS / 2); i++)
		tab[i] = new Cat();

	for (int i = NB_ANIMALS / 2; i < NB_ANIMALS; i++)
		tab[i] = new Dog();

	for (int i = 0; i < NB_ANIMALS; i++)
		tab[i]->makeSound();

	for (int i = 0; i < NB_ANIMALS; i++)
		delete tab[i];
}

inline void	testCopyDog(void)
{
	Dog *d1 = new Dog();

	std::cout << "Setting idea LETS EAT and LETS PLAY" << std::endl;
	d1->getBrain()->setIdea("LETS EAT", 0);
	d1->getBrain()->setIdea("LETS PLAY", 1);

	std::cout << "Print idea of Dog 1" << std::endl;
	std::cout << "[1] " << d1->getBrain()->getIdea(0) << std::endl;
	std::cout << "[2] " << d1->getBrain()->getIdea(1) << std::endl;

	std::cout << "Creating a copy of Dog 1 in a Dog 2" << std::endl;
	Dog *d2 = new Dog(*d1);

	std::cout << "Kill Dog 1" << std::endl;
	delete d1;

	std::cout << "Print idea of Dog 2" << std::endl;
	std::cout << "[1] " << d2->getBrain()->getIdea(0) << std::endl;
	std::cout << "[2] " << d2->getBrain()->getIdea(1) << std::endl;

	std::cout << "Kill Dog 2" << std::endl;
	delete d2;
}

inline void	testCopyCat(void)
{
	Cat *d1 = new Cat();

	std::cout << "Setting idea LETS EAT and LETS PLAY" << std::endl;
	d1->getBrain()->setIdea("LETS EAT", 0);
	d1->getBrain()->setIdea("LETS PLAY", 1);

	std::cout << "Print idea of Cat 1" << std::endl;
	std::cout << "[1] " << d1->getBrain()->getIdea(0) << std::endl;
	std::cout << "[2] " << d1->getBrain()->getIdea(1) << std::endl;

	std::cout << "Creating a copy of Cat 1 in a Cat 2" << std::endl;
	Cat *d2 = new Cat(*d1);

	std::cout << "Kill Cat 1" << std::endl;
	delete d1;

	std::cout << "Print idea of Cat 2" << std::endl;
	std::cout << "[1] " << d2->getBrain()->getIdea(0) << std::endl;
	std::cout << "[2] " << d2->getBrain()->getIdea(1) << std::endl;

	std::cout << "Kill Cat 2" << std::endl;
	delete d2;
}

int	main(void)
{
	arrayTest();
	std::cout << "\n##########################################\n"  << std::endl;
	testCopyDog();
	std::cout << "\n##########################################\n"  << std::endl;
	testCopyCat();

	return (0);
}
