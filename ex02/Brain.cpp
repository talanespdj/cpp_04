/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:05:45 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/22 23:07:03 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "New brain unlocked" << std::endl;
}

Brain::~Brain() {
	std::cout << "I have no brain now" << std::endl;
}

Brain::Brain(const Brain& b) {
	std::cout << "Just copied a brain" << std::endl;
	for (int x = 0; x < 100; ++x)
		ideas[x] = b.ideas[x];
}

Brain& Brain::operator=(const Brain& b) {
	std::cout << "Just assigned a brain" << std::endl;
	if (this != &b)
		for (int x = 0; x < 100; ++x)
			ideas[x] = b.ideas[x];
	return (*this);
} 

void	Brain::setIdea(std::string idea, int index) {
	if (index < 0 || index > 100)
		return ;
	this->ideas[index] = idea;
}

std::string	Brain::getIdea(int index) {
	return (this->ideas[index]);
}