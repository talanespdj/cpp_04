/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 18:25:17 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 18:26:02 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <iostream>

class	Character : public ICharacter {
	private:
		AMateria	*inventory[4];
		std::string	name;
	
	public:
		Character();
		Character(std::string name);
		virtual ~Character();
		Character(const Character &a);
		Character& operator=(const Character &a);
		Character(std::string const & type);

		/// @INTERFACE:
		std::string const & getName();
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};


#endif