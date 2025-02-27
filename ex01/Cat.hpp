/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:46:06 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/22 21:04:57 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat : public Animal {
	private:
		std::string	type;
		Brain		*br;

	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat& c);
		Cat& operator=(const Cat& c);

		void	makeSound();

		std::string	getType();
		Brain		*getBrain() const;

		// void		setType(std::string data);	
};

#endif

