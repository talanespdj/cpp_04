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
#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class	WrongCat : virtual public WrongAnimal {
	private:
		std::string	type;

	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat& c);
		WrongCat& operator=(const WrongCat& c);

		void	makeSound();

		std::string	getType();
};

#endif

