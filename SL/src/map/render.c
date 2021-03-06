/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <bharghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:49:29 by bharghaz          #+#    #+#             */
/*   Updated: 2021/12/15 16:59:42 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/so_long.h"
#include <stdio.h>

void	draw_wall(t_tile tile, t_game game, t_coord pos);

static void	draw_image(t_tile tile, t_game game, t_coord pos)
{
	if (tile.type == WALL || tile.type == EMPTY || tile.type == EMPTIED)
		draw_wall(tile, game, pos);
	else if (tile.type == EXIT)
	{
		if (game.collects != 0)
			mlx_put_image_to_window(game.mlx, game.window,
				game.items_imgs.door_img[0], pos.x, pos.y);
		if (game.collects == 0)
			mlx_put_image_to_window(game.mlx, game.window,
				game.items_imgs.door_img[1], pos.x, pos.y);
	}
	else if (tile.type == COLLECTABLE)
		mlx_put_image_to_window(game.mlx, game.window,
			game.items_imgs.collects_img[0], pos.x, pos.y);
	else if (tile.type == PLAYER)
		mlx_put_image_to_window(game.mlx, game.window,
			game.player.character.current_img, pos.x, pos.y);
	else if (tile.type == ENEMY)
		mlx_put_image_to_window(game.mlx, game.window,
			game.enemy.character.current_img, pos.x, pos.y);
}

static void	draw_text(t_game game)
{
	char	*str;

	str = ft_itoa(game.moves);
	if (game.collects >= 0)
		mlx_string_put(game.mlx, game.window,
			game.wndw_size.x - IMG_SIZE,
			IMG_SIZE - IMG_SIZE / 1.5,
			-1, str);
	free(str);
}

void	render(t_game game)
{
	t_tile	tile;
	int		x;
	int		y;

	mlx_clear_window(game.mlx, game.window);
	y = 0;
	while (game.tilemap[y] != NULL)
	{
		x = 0;
		while (game.tilemap[y][x].type != 0)
		{
			tile = game.tilemap[y][x];
			draw_image(tile, game, tile.coordinates);
			x++;
		}
		y++;
	}
	draw_text(game);
}
