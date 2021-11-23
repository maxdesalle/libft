/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_access_iterator.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxdesalle <mdesalle@student.s19.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:56:47 by maxdesall         #+#    #+#             */
/*   Updated: 2021/11/23 17:29:55 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RANDOM_ACCESS_ITERATOR_HPP
# define RANDOM_ACCESS_ITERATOR_HPP

namespace ft
{
	class random_access_iterator_tag { };

	template<typename T>
	class random_access_iterator: public ft::iterator<ft::random_access_iterator_tag, T>
	{
		public:

		private:
	};
}

#endif
