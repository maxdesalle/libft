/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxdesalle <mdesalle@student.s19.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:10:48 by maxdesall         #+#    #+#             */
/*   Updated: 2021/10/18 15:22:02 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

# include "Brain.hpp"

class	Animal
{
	public:

		Animal(void);
		virtual				~Animal(void) = 0;
		Animal(Animal const &ref);
		Animal				&operator=(Animal const &ref);

		virtual void		set_type(std::string type);

		virtual std::string	get_type(void)	const;

		virtual void		makeSound(void)	const = 0;

	protected:

		std::string			_type;
};

#endif
