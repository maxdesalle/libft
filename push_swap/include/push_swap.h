/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 09:36:10 by mdesalle          #+#    #+#             */
/*   Updated: 2021/07/06 16:11:15 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define SA 0
# define SB 1
# define SS 2
# define PA 3
# define PB 4
# define RA 5
# define RB 6
# define RR 7
# define RRA 8
# define RRB 9
# define RRR 10

# define ZERO_ARG 1
# define ONE_ARG 2
# define TWO_ARG 3

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}				t_node;

/* list.c */
void	save(t_node **head, int argc, char **argv);

/* atoi.c */
int		is_empty(char c);
int		is_sign(char c);
int		is_num(char c);
int		ft_atoi(char *str);

/* return.c */
void	instruct(int option);
int		normal(int return_code);
int		error(void);

/* utils.c */
void	init(t_node **a_head);

/* moves/.c */
void	sa(t_node **a_head, int len);
void	sb(t_node **b_head, int len);
void	ss(t_node **a_head, t_node **b_head, int a_len, int b_len);
void	ra(t_node **a_head);
void	rb(t_node **b_head);
void	rr(t_node **a_head, t_node **b_head);
void	rra(t_node **a_head);
void	rrb(t_node **b_head);
void	rrr(t_node **a_head, t_node **b_head);
void	pa(t_node **a_head, t_node **b_head);
void	pb(t_node **a_head, t_node **b_head);

#endif
