/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 21:16:13 by mdesalle          #+#    #+#             */
/*   Updated: 2021/03/25 10:41:31 by maxdesall        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include <limits.h>
# include <string.h>
# include "../minilibX/mlx.h"

# define BUFFER_SIZE = 32

# define A 0
# define S 1
# define D 2
# define W 13
# define ESC 53
# define LEFT 123
# define RIGHT 124
# define BACKWARD 125
# define FORWARD 126

# define FORWARD_MOVE 1
# define BACK_MOVE 0
# define RIGHT_MOVE 1
# define LEFT_MOVE 0

typedef struct	s_list
{
	int	check;
	int	reader;
}				t_list;

typedef struct	s_fc
{
	int	c;
	int	f;

	int	cre;
	int	cgr;
	int	cbl;

	int	fre;
	int	fgr;
	int	fbl;
}				t_fc;

typedef struct	ray
{
	int	hit;
	int	sde;

	int	mx;
	int	my;

	int	tx;
	int	ty;

	int	wx;

	int	sx;
	int	sy;

	int	ds;
	int	de;

	int	lh;
	int	rc;

	double	stp;
	double	txp;

	double	px;
	double	py;

	double	dx;
	double	dy;

	double	plx;
	double	ply;

	double	cx;
	double	prp;

	double	rdx;
	double	rdy;

	double	sdx;
	double	sdy;

	double	rs;
	double	ms;

	double	ddx;
	double	ddy;
}				t_ray;

typedef struct	s_mlx
{
	int	end;
	int	tdr;
	int	sl;
	int	bpp;
	void	*img;
	void	*win;
	void	*mlx;
	unsigned int	*adr;

	void	*isp;
	unsigned int	*asp;
}				t_mlx;

typedef struct	s_map
{
	int	prx;
	int	pry;
	int	ori;
	char	**map;
}				t_map;

typedef struct	s_uti
{
	int	i;
	int	err;
	int	nbl;
	int	ll;
	int	ctr;
	int	mps;
	int	ext;
	int	sve;
}				t_uti;

typedef struct	s_spr
{
	int	dsx;
	int	dex;

	int	dsy;
	int	dey;

	int	*spo;
	int	spc;

	int	spw;
	int	sph;

	int	ssx;

	double	*sx;
	double	*sy;

	double	inv;

	double	tfx;
	double	tfy;

	double	spx;
	double	spy;

	double	*zbf;
	double	*spd;
}				t_spr;

typedef	struct	s_res
{
	int	rx;
	int	ry;
	int	sx;
	int	sy;
}				t_res;

typedef struct	t_tex
{
	unsigned int	*adr;
	int	wdh;
	int	hgt;
	int	end;
	int	sl;
	int	bpp;
	char	*pth;
	void	*img;
}				t_tex;

typedef struct	s_mainlist
{
	t_fc	fc;
	t_ray	ray;
	t_mlx	mlx;
	t_map	map;
	t_uti	uti;
	t_spr	spr;
	t_res	res;
	t_tex	tex[5];
}				v_list;

int				ft_map_valid(char *line, v_list *c);

int				ft_args(char *argv, v_list *c);
int				ft_argn(char *argv);
int				ft_error(int option, v_list *c);

int                             get_next_line(int fd, char **line);

int				ft_exit(v_list *c);

int				ft_key(int key, v_list *c);
int				ft_start(v_list *c);

size_t                  ft_strlen(const char *s);
char                    *ft_substr(char const *s, unsigned int start, size_t len);
char                    *ft_strjoin(char const *s1, char const *s2);
char                    *ft_strcat_alpha(char *dest, char *src, int len);

int				ft_save(v_list *c);

void				ft_visinit(v_list *c);
void				ft_orinit(v_list *c);

void				ft_height(v_list *c);
void				ft_delta(v_list *c);

void				ft_rright(v_list *c);
void				ft_rleft(v_list *c);
void				ft_vertical(v_list *c, int option);
void				ft_horizontal(v_list *c, int option);

size_t				ft_strlen(const char *s);
char				*ft_strchr(const char *s, int c);
void				ft_swap(v_list *c);
void				ft_init(v_list *c);

void			ft_tex(char *line, v_list *c);
void			ft_texplace(v_list *c);

#endif
