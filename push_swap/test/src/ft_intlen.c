/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 08:48:27 by mdesalle          #+#    #+#             */
/*   Updated: 2021/07/13 09:23:50 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

size_t	ft_intlen(long x)
{
	int		len;
	long	tmp;

	len = 0;
	tmp = x;
	if (x == 0)
		return (++len);
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	if (x < 0)
		len++;
	return (len);
}
