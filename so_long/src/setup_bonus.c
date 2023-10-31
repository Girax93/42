/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:15:24 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/18 14:55:04 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//	1.	Lets us stretch the window to fit any screen
//	2.	Makes the window decorated (X button etc).
void	set_settings(void)
{
	mlx_set_setting(MLX_STRETCH_IMAGE, true);
	mlx_set_setting(MLX_DECORATED, true);
}

//	1.	Initialises the game based on the width and height from size_map()
//	2.	Loads the textures (png's) into their corresponding game variables
//	3.	Renders the images on the screen & stores them in their corresponding
//		variables
//	4.	Draws the map, aka puts the images in their correct positions on screen
//	5.	Sets up the mlx_key_hook function, which sets the keybinds for the game
//	6.	Starts the game (loops the window)
//	7.	Terminates the window when game is over.
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

// 	Plays a random background audio track.
//	The rand logic is as follows:
//	1.	srand changes the seed of random numbers for rand based on current time
//	2.	rand() generates a random number
//	3.	The modulo results in a random number between 0 and 1 (% 2 numbers).
//	4.	I then do +1 to make the number be between 1 and 2.
//	Then loads and plays the music based off what random number was generated.
//	Lastly stores a pointer to the audio so that we can free it later.
//	Since the seed uses current time for finding it's numbers, you don't need
//	to recompile to get a random number.
int	play_music(t_game *game)
{
	int			random_number;
	t_mix_music	*background_music;

	background_music = NULL;
	srand((unsigned) time(NULL));
	random_number = (rand() % 2) + 1;
	if (random_number == 1)
		background_music = Mix_LoadMUS("./audio/the_unknown.wav");
	if (random_number == 2)
		background_music = Mix_LoadMUS("./audio/the_unknown2.wav");
	if (background_music == NULL)
		return (FALSE);
	game->music = background_music;
	Mix_PlayMusic(background_music, -1);
	return (TRUE);
}

//	1.	Initialises the audo session (returns error on failure)
//	2.	Initialises the SDL_mixer (returns error on failure)
//	3.	Runs the play_music function on success.
int	setup_music(t_game *game)
{
	if (SDL_Init(SDL_INIT_AUDIO < 0))
	{
		ft_printf("SDL Error: %s\n", SDL_GetError());
		return (FALSE);
	}
	if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048) < 0)
	{
		ft_printf("SDL_mixer Error: %s\n", Mix_GetError());
		return (FALSE);
	}
	if (play_music(game) == FALSE)
	{
		ft_printf("Failed to load music! SDL_mixer Err: %s\n", Mix_GetError());
		return (FALSE);
	}
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
	if (setup_music(game) == FALSE)
		return (FALSE);
	if (init_game(game) == FALSE)
		return (FALSE);
	return (TRUE);
}
