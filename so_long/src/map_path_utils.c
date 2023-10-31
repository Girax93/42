/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_path_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 19:33:29 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/18 14:54:21 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//	Checks if the given location is inside of the map.
//	Returns WRONG (0) If coordinates are bigger than map size, or less than 1.
//	Returns POSITIVE (1) otherwise.
int	is_within_bounds(t_game *game, int y, int x)
{
	if (x < 1)
		return (WRONG);
	if (y < 1)
		return (WRONG);
	if (x >= game->map_width)
		return (WRONG);
	if (y >= game->map_height)
		return (WRONG);
	return (POSITIVE);
}

//	Returns WRONG (0) if the given tile is:
//	- A wall (1)
//	- An enemy (D)
//	- A visited tile (X)
// Returns POSITIVE (1) otherwise.
int	is_unvisited(t_game *game, int y, int x)
{
	if (game->map_2[y][x] == MAP_WALL)
		return (WRONG);
	if (game->map_2[y][x] == MAP_ENEMY)
		return (WRONG);
	if (game->map_2[y][x] == MARK_VISITED)
		return (WRONG);
	return (POSITIVE);
}

//	Returns FALSE (1) if the specified tile is:
//	- A wall (1)
//	- Floor (0)
//	- Visited tile (X)
//	- An enemy (D)
//	Returns TRUE (0) otherwise.
int	is_valid_tile(char tile)
{
	if (tile == MAP_WALL \
		|| tile == MAP_FLOOR \
		|| tile == MARK_VISITED \
		|| tile == MAP_ENEMY)
		return (FALSE);
	else
		return (TRUE);
}
