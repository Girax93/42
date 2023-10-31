/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movement.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:50:58 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/18 14:52:17 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//	mlx_instance_t is the instance(location) of an image.
//	Think "in which instance of the window/display is the image"
//	This function simply moves the instance of an image by the given coordinates
//	NB	-	This function can be altered to also change the z_offset.
//		-	the z_offset is the depth of the image over/under others. ie:
//			character over collectibe, or a monster over running lava
//			where the monster and the lava is two different images.
void	perform_move(t_game *game, int y_offset, int x_offset)
{
	static mlx_image_t		*move_img = NULL;
	mlx_instance_t			*img_location;
	char					*steps;

	img_location = game->imag->chara->instances;
	img_location->y += y_offset;
	img_location->x += x_offset;
	game->move_count++;
	steps = ft_itoa(game->move_count);
	ft_printf("MOVES: %i\n", game->move_count);
	if (move_img != NULL)
		move_img->enabled = false;
	move_img = mlx_put_string(game->mlx, steps, 5, 5);
	if (game->map[img_location->y / 32][img_location->x / 32] == MAP_ENEMY)
	{
		ft_printf("THAT WAS A BAD YOMM! \n");
		free(steps);
		mlx_close_window(game->mlx);
		return ;
	}
	free(steps);
}

// Moves [-1][0] aka [-32][0]
void	move_up(t_game *game)
{
	if (can_move(game, -1, 0))
		perform_move(game, -MOVE, 0);
}

// Moves [0][+1] aka [0][+32]
void	move_right(t_game *game)
{
	if (can_move(game, 0, 1))
		perform_move(game, 0, MOVE);
}

// Moves [1][0] aka [+32][0]
void	move_down(t_game *game)
{
	if (can_move(game, 1, 0))
		perform_move(game, MOVE, 0);
}

// Moves [0][-1] aka [0][-32]
void	move_left(t_game *game)
{
	if (can_move(game, 0, -1))
		perform_move(game, 0, -MOVE);
}
