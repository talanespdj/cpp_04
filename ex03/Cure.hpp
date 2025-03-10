/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:37:50 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 19:40:15 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Cure : public AMateria {
	private:

	public:
		Cure();
		~Cure();
		Cure(const Cure &i);
		Cure&	operator=(const Cure &i);

		void	use(ICharacter& target);
		AMateria*	clone() const;

		
		std::string	getType() const;
};

#endif
