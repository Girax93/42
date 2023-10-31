/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:05:48 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/18 14:53:17 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// Iterates through every string of the map, and returns the
// position of "P" (MAP_ENTRY), when it is found. Returns -1
// if it is not found.
int	find_start_in_row(char *row)
{
	int	x;

	x = 0;
	while (row[x])
	{
		if (row[x] == MAP_ENTRY)
		{
			return (x);
		}
		x++;
	}
	return (-1);
}

//	Returns the players starting position, by checking for
//	"P" in every string of the map.
int	*start_pos(char **map)
{
	int	y;
	int	x;
	int	*pos;

	pos = (int *)ft_calloc(2, sizeof(int));
	y = 0;
	while (map[y])
	{
		x = find_start_in_row(map[y]);
		if (x != -1)
		{
			pos[0] = y;
			pos[1] = x;
			return (pos);
		}
		y++;
	}
	return (pos);
}

// Simply floods the map with "X" (MARK_VISITED)
// In every location reachable, aka
// where there are no walls (or enemies for the bonus)
// ...THIS....................................BECOMES.
// 111111111.................................111111111
// 10P001001.................................1XXXX1001
// 100001001.................................1XXXX1001
// 100001001.................................1XXXX1001
// 111111111.................................111111111
void	flood_map(t_game *game, int y, int x)
{
	if (is_within_bounds(game, y, x) && is_unvisited(game, y, x))
	{
		game->map_2[y][x] = MARK_VISITED;
		flood_map(game, y + 1, x);
		flood_map(game, y - 1, x);
		flood_map(game, y, x + 1);
		flood_map(game, y, x - 1);
	}
}

//	Checks if there are any collectibles or exits left on the map
//	Returns TRUE if the map is good to go :)
int	check_flood(char **map)
{
	int	y;
	int	x;

	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (!is_valid_tile(map[y][x]))
				return (FALSE);
			x++;
		}
		y++;
	}
	return (TRUE);
}

//	1.	Starts by reading the map as a string and stores it in game->map_2
//	2.	Finds the starting position of the character (pos)
//	3.	Floods the map, marking every reachable location with X
//	4.	Checks if (after marking with X), there are still any necesarry tiles
//		such as E or C left on the map. If there are, it means
//		that they are out of reach.
//		returns FALSE if there are no valid paths.
int	valid_path(t_game *game, char *fd)
{
	int	*pos;
	int	is_flood_valid;

	game->map_2 = read_map(fd);
	pos = start_pos(game->map_2);
	flood_map(game, pos[0], pos[1]);
	is_flood_valid = check_flood(game->map_2);
	free(pos);
	free_map(game->map_2);
	if (is_flood_valid == FALSE)
	{
		ft_printf(PATH_MSG);
		return (FALSE);
	}
	return (TRUE);
}
