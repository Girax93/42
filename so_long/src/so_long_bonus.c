/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:26:16 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/08 13:22:45 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// Simply validates the input arguments and file extensions.
int	validate_args(int argc, char *map)
{
	if (argc != 2)
	{
		ft_printf(FILE_MSG);
		return (FALSE);
	}
	if (check_extension(map) == FALSE)
	{
		ft_printf(FILE_EXT_MSG);
		return (FALSE);
	}
	return (TRUE);
}

// Sets the move-count to 0
// Sets the amount of collected collectibles to 0
// Sets up the graphics
// Frees everything when the game is terminated.
int	init_game(t_game *game)
{
	game->move_count = 0;
	game->collectibles_collected = 0;
	if (setup_graphics(game))
		return (FALSE);
	free_game_resources(game);
	return (TRUE);
}

// Checks if the input is correct
// Runs the game.
// Prints errors if either fails.
int	main(int argc, char **argv)
{
	t_game	game;

	if (validate_args(argc, argv[1]) == FALSE)
		return (FALSE);
	if (setup_game(&game, argv[1]) == FALSE)
		return (FALSE);
	printf("GAME END!\n");
	return (0);
}
