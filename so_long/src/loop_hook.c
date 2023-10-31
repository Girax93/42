/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_hook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 22:12:43 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/13 16:14:24 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// This loop function simply displays the total moves made inside of the game.
// Before the first move. This gets updated (removed) whever a move is made.
void	my_loop_function(void *param)
{
	t_game				*game;
	static mlx_image_t	*img = NULL;

	game = param;
	if (img == NULL)
		img = mlx_put_string(game->mlx, "0", 5, 5);
	if (game->move_count > 0)
		img->enabled = false;
}

//	The character instance is a struct that gets created
//	upon loading the png. It contains the x/y position of the img,
//	and also the ability to toggle it on/off with enabled = true/false.
//	This function uses this to put an image in the players position,
//	Then disable the image, then put the next image in the same position,
//	Then disable the image, and then repeat this process until all 5 frames
//	has been iterated through. Then enables the first frame.
//	Now that all these images has been put on the screen, we no longer need to
//	put new images on the screen (since this would make the program slow).
//	instead we can move the images around and activate/deactivate them.
void	init_draw(t_game *game)
{
	int				i;
	mlx_instance_t	*char_instance;

	char_instance = game->imag->chara->instances;
	i = 0;
	while (i < game->ani->total_frames)
	{
		mlx_image_to_window(game->mlx, \
							game->ani->chara_img[i], \
							char_instance->x, \
							char_instance->y);
		game->ani->chara_img[i++]->enabled = false;
	}
	game->ani->chara_img[0]->enabled = true;
}

//	Updates the positions/instance positions, of the animation images
//	So that it is always equal to the position of the character's current pos.
void	update_positions(t_game *game)
{
	int				i;
	mlx_instance_t	*char_instance;

	char_instance = game->imag->chara->instances;
	i = 0;
	while (i < game->ani->total_frames)
	{
		game->ani->chara_img[i]->instances->x = char_instance->x;
		game->ani->chara_img[i++]->instances->y = char_instance->y;
	}
}

//	1.	disables the display of the initial single image of the character
//	NB! We still keep this image because we use its data to determine the
//		positions of the players character on the map.
//	2.	Then displays and disables each of the frames to initiate an instance
//		of the 5 frames we use for the animation (init_draw)
//	3.	Then disables the current frame and enables the next frame.
//	4.	Lastly, updates the positions of each frame on the map so that
//		it follows the position of the character.
void	draw_animated_char(void *param)
{
	static bool	images_initialized = false;
	static int	current_frame = 0;
	static int	speed = 0;
	t_game		*game;

	game = (t_game *)param;
	game->imag->chara->enabled = false;
	if (!images_initialized)
	{
		init_draw(game);
		images_initialized = true;
	}
	speed++;
	if (speed >= 30)
	{
		game->ani->chara_img[current_frame]->enabled = false;
		current_frame = (current_frame + 1) % game->ani->total_frames;
		game->ani->chara_img[current_frame]->enabled = true;
		speed = 0;
	}
	update_positions(game);
}
