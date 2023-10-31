/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_images.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:51:46 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/13 16:30:21 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//	Draws the given image on the given tile ( * 32 ).
//	We do * 32 simply because there are 32 bits in a picture, and we want
//	the pictures to be next to each other.
void	draw_image_on_tile(t_game *game, mlx_image_t *image, int x, int y)
{
	mlx_image_to_window(game->mlx, image, x * 32, y * 32);
}

// Draws the floor using select_tile_image(), and draw_image_on_tile().
void	draw_floor(t_game *game, t_images *image)
{
	int			x;
	int			y;
	mlx_image_t	*tile_image;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			tile_image = select_tile_image(game, image, x, y);
			draw_image_on_tile(game, tile_image, x, y);
			x++;
		}
		y++;
	}
}

//	Draws the remaining tiles, such as the enemies, collectibles,
//	entry position of the character, and the character animation.
void	draw_map(t_game *game, t_images *image)
{
	int		x;
	int		y;
	char	**map;

	draw_floor(game, image);
	map = game->map;
	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == MAP_COLLECTABLE)
				draw_image_on_tile(game, image->collec, x, y);
			else if (map[y][x] == MAP_ENEMY)
				draw_image_on_tile(game, image->danger, x, y);
			else if (map[y][x] == MAP_ENTRY)
			{
				draw_image_on_tile(game, image->chara, x, y);
				mlx_loop_hook(game->mlx, &draw_animated_char, game);
			}
			x++;
		}
		y++;
	}
}
