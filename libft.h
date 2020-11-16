/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 10:10:43 by mdesalle          #+#    #+#             */
/*   Updated: 2020/11/16 14:37:25 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int     ft_atoi(const char *nptr);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_isalnum(int c);
char    *ft_itoa(int n);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_isalpha(int c);
void    ft_putchar(char c);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_isascii(int c);
char    *ft_strstr(const char *haystack, const char *needle);
int     ft_isdigit(int c);
void    ft_putnbr(int n);
size_t  ft_strlen(const char *s);
int     ft_tolower(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*strchr(const char *s, int c);

#endif