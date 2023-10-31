/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectibles.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:52:19 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/18 14:52:43 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// Counts & returns the total of collectibles ( "C" ) in the map
int	total_collectibles(t_game *game)
{
	int	total;
	int	y;
	int	x;

	total = 0;
	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			total += (game->map[y][x] == 'C');
			x++;
		}
		y++;
	}
	return (total);
}

// Iterates through each collectible's position and
// deletes it if it is the same as the players position.
void	delete_orbs(t_game *game)
{
	int				i;
	int				count;
	mlx_instance_t	*player_pos;
	mlx_instance_t	*collectible_pos;

	i = 0;
	count = game->total_collectibles;
	player_pos = game->imag->chara->instances;
	collectible_pos = game->imag->collec->instances;
	while (i < count)
	{
		if (collectible_pos[i].enabled \
			&& collectible_pos[i].y == player_pos->y \
			&& collectible_pos[i].x == player_pos->x)
		{
			collectible_pos[i].enabled = false;
			return ;
		}
		i++;
	}
}

//	1.	"collects" orbs by deleting them when the player is on their location,
//		and increments the count_collected variable.
//	2.	Remove the top layer of the exit images, if count_collected is equal
//		to total_collectibles.
void	collect_orbs(t_game *game)
{
	int		char_y;
	int		char_x;
	char	current_tile;
	bool	*exit_enabled;

	char_y = game->imag->chara->instances->y / 32;
	char_x = game->imag->chara->instances->x / 32;
	current_tile = game->map[char_y][char_x];
	exit_enabled = &game->imag->exit->instances->enabled;
	if (current_tile == MAP_COLLECTABLE)
	{
		delete_orbs(game);
		game->map[char_y][char_x] = MAP_FLOOR;
		game->collectibles_collected++;
		if (game->collectibles_collected == game->total_collectibles)
			*exit_enabled = false;
	}
	else if ((current_tile == MAP_EXIT) \
		&& (game->collectibles_collected == game->total_collectibles))
	{
		ft_printf("YOU WIN!!! HURRAY!\n");
		mlx_close_window(game->mlx);
	}
}
