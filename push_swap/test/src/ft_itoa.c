/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 09:17:14 by mdesalle          #+#    #+#             */
/*   Updated: 2021/07/13 11:29:04 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test.h"

char	*ft_itoa(int n)
{
	int		len;
	long	x;
	char	*s;

	x = n;
	len = ft_intlen(x);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (x == 0)
		s[0] = '0';
	if (x < 0)
	{
		s[0] = '-';
		x *= -1;
	}
	while (x > 0)
	{
		s[len--] = x % 10 + '0';
		x /= 10;
	}
	return (s);
}
