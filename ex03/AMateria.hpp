/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:09:48 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/22 23:11:42 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class	AMateria {
	protected:
		// std::string		name;
		std::string const	type;

	public:

		AMateria();
		~AMateria();
		AMateria(AMateria const &a);
		AMateria operator=(AMateria const &a);
		AMateria(std::string const & type);

		std::string const & getType() const; //Returns the materia type
 
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
