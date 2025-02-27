/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:43:02 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/22 21:05:17 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {
	private:
		std::string	type;
		Brain		*br;

	public:
		Dog();
		virtual ~Dog(); 
		Dog(const Dog& d);
		Dog& operator=(const Dog& d);

		void	makeSound() const;

		std::string	getType();
		Brain		*getBrain() const;
		// void		setType(std::string data);	
};

#endif
