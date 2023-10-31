/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:15:24 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/13 14:30:06 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//	1.	Simply makes the window able to be stretched
//	2.	Sets the decorations around the window, such as "X" etc.
void	set_settings(void)
{
	mlx_set_setting(MLX_STRETCH_IMAGE, true);
	mlx_set_setting(MLX_DECORATED, true);
}

// 1. Initialises the game based on the width and height from size_map()
// 2. Loads the textures (png's) into their corresponding game variables
// 3. Renders the images on the screen & stores them in their corresponding
//    variables
// 4. Draws the map, aka puts the images in their correct positions on screen
// 5. Sets up the mlx_key_hook function, which sets the keybinds for the game
// 6. Starts the game (loops the window)
// 7. Terminates the window when game is over.
int	setup_graphics(t_game *game)
{
	set_settings();
	game->mlx = mlx_init(game->map_width, game->map_height, "so_long", true);
	game->last_drawn_x = -1;
	game->last_drawn_y = -1;
	if (!(game->mlx))
		return (FALSE);
	get_textures(game);
	convert_to_images(game);
	draw_map(game, game->imag);
	mlx_key_hook(game->mlx, &my_key_hook, game);
	mlx_loop_hook(game->mlx, &my_loop_function, game);
	mlx_loop(game->mlx);
	mlx_terminate(game->mlx);
	return (TRUE);
}

// Reads and stores the text of the map file in the game->map variable
// Checks if the map is valid, and frees+returns if not
// Sets variables for number of collectables, height and width (size) of map.
// Checks if the game/map has a valid path to completion
// If all the checks turned out positive, it initialises the game.
int	setup_game(t_game *game, char *map)
{
	game->map = read_map(map);
	if (!game->map)
	{
		ft_printf(ERR_INPUT_READ);
		return (FALSE);
	}
	if (check_map(game->map) == FALSE)
	{
		free_map(game->map);
		return (FALSE);
	}
	game->total_collectibles = total_collectibles(game);
	size_map(game, game->map);
	if (valid_path(game, map) == FALSE)
	{
		free_map(game->map);
		return (FALSE);
	}
	if (init_game(game) == FALSE)
		return (FALSE);
	return (TRUE);
}
