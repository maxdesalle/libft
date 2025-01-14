/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_save.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 19:09:56 by mdesalle          #+#    #+#             */
/*   Updated: 2021/07/27 10:02:09 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static int	lencalc(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '\0'
		|| str[i] == '-')
	{
		if ((str[i] == ' ' || str[i] == '\0')
			&& (str[i - 1] >= '0' && str[i - 1] <= '9'))
			len += 1;
		if (str[i] == '\0')
			break ;
		i += 1;
	}
	if (str[i] != '\0')
		return (error());
	return (len);
}

static int	space_check(char *str, int i)
{
	while (str[i] && (str[i] == '-' || (str[i] >= '0' && str[i] <= '9')))
		i += 1;
	if (str[i] == ' ' || str[i] == '\0')
		return (i);
	else
		return (0);
}

static int	*lister(char *str, int len, int i)
{
	int	size;
	int	*array;

	size = 0;
	array = malloc(sizeof(int) * (len + 1));
	if (!array)
	{
		error();
		return (NULL);
	}
	while ((str[i] >= '0' && str[i] <= '9') || str[i] == ' ' || str[i] == '\0'
		|| str[i] == '-')
	{
		if ((str[i] == '-' || (str[i] >= '0' && str[i] <= '9'))
			&& space_check(str, i))
		{
			array[size] = ft_atoi(&str[i]);
			size += 1;
			i = space_check(str, i);
		}
		if (str[i] == '\0')
			break ;
		i += 1;
	}
	return (array);
}

void	one_save(t_node **a_head, char **argv, int *len)
{
	int		i;
	int		*list;
	t_node	*tmp;

	i = 0;
	*len = lencalc(argv[1]);
	list = lister(argv[1], *len, i);
	while (i < *len)
	{
		if (d_check(*a_head, list[i], i))
			create(a_head, list[i]);
		i += 1;
	}
	tmp = *a_head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *a_head;
	(*a_head)->prev = tmp;
	free(list);
}
