/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 19:37:06 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/24 19:46:22 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Ice : public AMateria {
	private:

	public:
		Ice();
		~Ice();
		Ice(const Ice &i);
		Ice&	operator=(const Ice &i);

		void	use(ICharacter& target);
		AMateria*	clone() const;


		std::string	getType() const;
};

#endif
