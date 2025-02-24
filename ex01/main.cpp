#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void) {
	int	n = 20;
	Animal	*tab[n];

	for (int x = 0; x < n; ++x) {
		if (x < n/2)
			tab[x] = new Dog;
		else
			tab[x] = new Cat;
	}

}