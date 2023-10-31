/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:33:50 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/13 15:43:44 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// Frees the map, textures and images loaded by mlx.
// Also frees the audio session, and any pointers pointed to audio.
void	free_game_resources(t_game *game)
{
	free_map(game->map);
	free(game->textu);
	free(game->imag);
	free(game->ani);
	Mix_FreeMusic(game->music);
	game->music = NULL;
	Mix_CloseAudio();
	Mix_Quit();
	SDL_Quit();
}

// Frees the map, and the pointer to the map.
void	free_map(char **map)
{
	char	**temp;

	temp = map;
	while (*temp)
	{
		free(*temp);
		temp++;
	}
	free(map);
}

// Very simply closes the window if the ESC key is pressed.
void	exit_key(t_game *game, mlx_key_data_t keydata, int action)
{
	if (is_action(keydata, action, MLX_KEY_ESCAPE))
		mlx_close_window(game->mlx);
}

// Frees temp_map, and closes its file descriptor.
void	cleanup(char *temp_map, int fd)
{
	if (temp_map)
		free(temp_map);
	if (fd >= 0)
		close(fd);
}
