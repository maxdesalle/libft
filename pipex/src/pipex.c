/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxdesalle <mdesalle@student.s19.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:00:58 by maxdesall         #+#    #+#             */
/*   Updated: 2021/07/30 11:52:49 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pipex.h"

int	main(int argc, char **argv, char **envp)
{
	t_node	s;

	if (argc != 3)
		return (error());
	s.path = path_finder(envp);
	filer(&s.file1, argv);
	s.args1 = ft_split(s.file1, ' ');
	s.args1[0] = command(s.path, s.file1);
	executer(s.args1);
	return (0);
}
