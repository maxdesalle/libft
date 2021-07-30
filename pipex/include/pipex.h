/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 09:36:10 by mdesalle          #+#    #+#             */
/*   Updated: 2021/07/30 09:24:23 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	char	**path;
	char	**args1;
	char	**args2;
}				t_node;

/* data/path.c */
char	**path_finder(char **envp);

/* data/command.c */
char	*command(char **path, char *cmd);
void	executer(char **args);

/* utilities/ft_split.c */
char	**ft_split(char const *s, char c);

/* utilities/ft_strncmp.c */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* utilities/ft_strjoin.c */
char	*ft_strjoin(char const *s1, char const *s2);

/* misc/return.c */
int		normal(int return_code);
int		error(void);

#endif
