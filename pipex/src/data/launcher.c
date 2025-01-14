/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launcher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:56:45 by mdesalle          #+#    #+#             */
/*   Updated: 2021/08/04 11:28:56 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/pipex.h"

/* creates a pipe, forks the process, returns 0 if the pid is invalid */
/* "rewires" the linking between stdin, stdout... using dup2 and close */
/* and finally executes the the commands */

/* afterwards, the waitpid function and the WEXITSTATUS macro are used */
/* to find out the return code */

int	launcher(t_node *s)
{
	pipe(s->pfd);
	s->pid = fork();
	if (s->pid < 0)
		return (0);
	if (s->pid == 0)
	{
		dup2(s->pfd[1], STDOUT);
		dup2(s->fd1, STDIN);
		close(s->pfd[0]);
		close(s->fd1);
		executer(s, s->args1);
	}
	else
	{
		dup2(s->pfd[0], STDIN);
		dup2(s->fd2, STDOUT);
		close(s->pfd[1]);
		close(s->fd2);
		executer(s, s->args2);
	}
	waitpid(s->pid, &s->status, 0);
	s->status = WEXITSTATUS(s->status);
	return (1);
}
