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

int	main(void) {
	int	n = 20;
	Animal	*tab[n];

	for (int x = 0; x < n; ++x) {
		if (x < n/2)
			tab[x] = new Dog();
		else
			tab[x] = new Cat();
	}
	for (int x = 0; x < n; ++x) {
		delete (tab[x]);
	}
	return (0);

}

// int	main(void)
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();


// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }
