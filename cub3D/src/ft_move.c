/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdesalle <mdesalle@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 08:05:35 by mdesalle          #+#    #+#             */
/*   Updated: 2021/02/26 10:52:01 by mdesalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

static void	ft_rotate_right(v_list *cube, double oldDirX, double oldPlaneX)
{
	cube->ray.dirX = cube->ray.dirX * cos(-cube->ray.rotspeed) -
		cube->ray.dirY * sin(-cube->ray.rotspeed);
	cube->ray.dirY = oldDirX * sin(-cube->ray.rotspeed) +
		cube->ray.dirY * cos(-cube->ray.rotspeed);
	cube->ray.planeX = cube->ray.planeX * cos(-cube->ray.rotspeed) -
		cube->ray.planeY * sin(-cube->ray.rotspeed);
	cube->ray.planeY = oldPlaneX * sin(-cube->ray.rotspeed) +
		cube->ray.planeY * cos(-cube->ray.rotspeed);
}

static void	ft_rotate_left(v_list *cube, double oldDirX, double oldPlaneX)
{
	cube->ray.dirX = cube->ray.dirX * cos(cube->ray.rotspeed) -
		cube->ray.dirY * sin(cube->ray.rotspeed);
	cube->ray.dirY = oldDirX * sin(cube->ray.rotspeed) +
		cube->ray.dirY * cos(cube->ray.rotspeed);
	cube->ray.planeX = cube->ray.planeX * cos(cube->ray.rotspeed) -
		cube->ray.planeY * sin(cube->ray.rotspeed);
	cube->ray.planeY = oldPlaneX * sin(cube->ray.rotspeed) +
		cube->ray.planeY * cos(cube->ray.rotspeed);
}

void		ft_move_horizontal(v_list *cube, int option)
{
	if (option == RIGHT_MOVE)
	{
		if (cube->map[(int)(cube->ray.posX + cube->ray.dirX *
			cube->ray.movespeed)][(int)(cube->ray.posY)] == 0)
			cube->ray.posX += cube->ray.dirX * cube->ray.movespeed;
		if (cube->map[(int)(cube->ray.posX)][(int)(cube->ray.posY -
			cube->ray.dirY * cube->ray.movespeed)] == 0)
			cube->ray.posY -= cube->ray.dirY * cube->ray.movespeed;
	}
	if (option == LEFT_MOVE)
	{
		if (cube->map[(int)(cube->ray.posX - cube->ray.dirX *
			cube->ray.movespeed)][(int)(cube->ray.posY)] == 0)
			cube->ray.posX -= cube->ray.dirX * cube->ray.movespeed;
		if (cube->map[(int)(cube->ray.posX)][(int)(cube->ray.posY +
			cube->ray.dirY * cube->ray.movespeed)] == 0)
			cube->ray.posY += cube->ray.dirY * cube->ray.movespeed;
	}
}

void            ft_move_vertical(v_list *cube, int option)
{
	if (option == FORWARD_MOVE)
	{
		if (cube->map[(int)(cube->ray.posX + cube->ray.dirX *
			cube->ray.movespeed)][(int)(cube->ray.posY)] == 0)
			cube->ray.posX += cube->ray.dirX * cube->ray.movespeed;
		if (cube->map[(int)(cube->ray.posX)][(int)(cube->ray.posY +
			cube->ray.dirY * cube->ray.movespeed)] == 0)
			cube->ray.posY += cube->ray.dirY * cube->ray.movespeed;
	}
	if (option == BACK_MOVE)
	{
		if (cube->map[(int)(cube->ray.posX - cube->ray.dirX *
			cube->ray.movespeed)][(int)(cube->ray.posY)] == 0)
			cube->ray.posX -= cube->ray.dirX * cube->ray.movespeed;
		if (cube->map[(int)(cube->ray.posX)][(int)(cube->ray.posY -
			cube->ray.dirY * cube->ray.movespeed)] == 0)
			cube->ray.posY -= cube->ray.dirY * cube->ray.movespeed;
	}
}

void		ft_rotate(v_list *cube, int option)
{
	double	oldDirX;
	double	oldPlaneX;

	oldDirX = cube->ray.dirX;
	oldPlaneX = cube->ray.planeX;
	if (option == RIGHT_ROTATE)
		ft_rotate_right(cube, oldDirX, oldPlaneX);
	if (option == LEFT_ROTATE)
		ft_rotate_left(cube, oldDirX, oldPlaneX);
}