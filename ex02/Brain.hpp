/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tespandj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:03:22 by tespandj          #+#    #+#             */
/*   Updated: 2025/02/22 23:04:39 by tespandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain {
	private:
		std::string	*ideas;

	public:
		Brain();
		~Brain();
		Brain(const Brain& b);
		Brain& operator=(const Brain& b);


		void		setIdea(std::string idea, int index);
		std::string	getIdea(int index);

};

#endif