/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 09:00:48 by mdesalle          #+#    #+#             */
/*   Updated: 2020/12/04 16:44:12 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

int	ft_printf(const char *str, ...)
{
	int		len;
	node_t	box;
	va_list	argptr;

	va_start(argptr, str);
	len = ft_parser(argptr, (char *)str, &box);
	va_end(argptr);
	return (len);
}
