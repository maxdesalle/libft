/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxdesalle <mdesalle@student.s19.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:10:48 by maxdesall         #+#    #+#             */
/*   Updated: 2021/11/22 11:25:57 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include "ClapTrap.hpp"

# define FLAGTRAP "FlagTrap"

class	FlagTrap: virtual public ClapTrap
{
	public:

		FlagTrap(void);
		FlagTrap(std::string name);
		FlagTrap(FlagTrap const &flag);
		~FlagTrap(void);

		FlagTrap		&operator=(FlagTrap const &c);

		void			highFivesGuys(void);
		void			attack(std::string const & target);
};

#endif
