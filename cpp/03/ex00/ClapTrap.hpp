/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxdesalle <mdesalle@student.s19.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:10:48 by maxdesall         #+#    #+#             */
/*   Updated: 2021/10/12 11:58:46 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

# define CONSTRUCTOR	1
# define DESTRUCTOR		0

# define LOUP			"Loup"
# define CROCODILE		"Crocodile"

class	ClapTrap
{
	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &clap);
		~ClapTrap(void);

		ClapTrap		&operator=(ClapTrap const &c);

		void			set_name(std::string const name);
		void			set_hitpoints(unsigned int const hitpoints);
		void			set_energy_points(unsigned int const energy_points);
		void			set_attack_damage(unsigned int const attack_damage);

		std::string		get_name(void)			const;
		unsigned int	get_hitpoints(void)		const;
		unsigned int	get_energy_points(void)	const;
		unsigned int	get_attack_damage(void)	const;

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	private:

		std::string		_name;
		unsigned int	_hitpoints;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};

#endif
