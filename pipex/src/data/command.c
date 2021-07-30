/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxdesalle <mdesalle@student.s19.be>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:12:36 by maxdesall         #+#    #+#             */
/*   Updated: 2021/07/30 09:24:11 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

void	executer(char **args)
{
	char	*envp[] = {NULL};

	if (execve(args[0], args, envp) == -1)
		perror("Error");
}

char	*command(char **path, char *cmd)
{
	int		i;
	char	**tab;

	i = 0;
	while (path[i])
	{
		path[i] = ft_strjoin(path[i], "/");
		tab = ft_split(cmd, ' ');
		path[i] = ft_strjoin(path[i], tab[0]);
		if (access(path[i], 0) == 0)
			return (path[i]);
		i += 1;
	}
	return (NULL);
}
