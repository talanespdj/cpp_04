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
		AMateria	*floor[50];
		std::string	name;
	
	public:
		Character();
		Character(std::string name);
		virtual ~Character();
		Character(const Character &a);
		Character& operator=(const Character &a);

		/// @INTERFACE:
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		AMateria	*getMateria(int idx);
};


#endif