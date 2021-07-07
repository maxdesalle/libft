/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:58:44 by mdesalle          #+#    #+#             */
/*   Updated: 2021/07/07 15:05:10 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	two_link(t_node **a_head, t_node **one, t_node **two)
{
	*a_head = *two;
	(*two)->next = *one;
	(*two)->prev = *one;
	(*one)->next = *two;
	(*one)->prev = *two;
}

static void	bink(t_node **one, t_node **two, t_node **three, t_node **tail)
{
	(*two)->next = *one;
	(*two)->prev = *tail;
	(*one)->prev = *two;
	(*one)->next = *three;
	(*three)->prev = *one;
	(*tail)->next = *two;
}

void	sa(t_node **a_head)
{
	int		len;
	t_node	*one;
	t_node	*two;
	t_node	*three;
	t_node	*tail;

	len = listlen(*a_head);
	one = *a_head;
	two = (*a_head)->next;
	three = two->next;
	tail = (*a_head)->prev;
	if (len == 1)
		return ;
	else if (len == 2)
		two_link(a_head, &one, &two);
	else
	{
		*a_head = two;
		bink(&one, &two, &three, &tail);
	}
	if (len == 3)
		tail->prev = one;
}
