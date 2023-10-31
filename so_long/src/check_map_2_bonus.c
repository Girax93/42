/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_2_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:53:46 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/18 14:54:29 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	has_map_necessary_tiles(char **map)
{
	int	i;
	int	exits;
	int	collectables;
	int	players;

	i = 0;
	exits = 0;
	collectables = 0;
	players = 0;
	while (map[i])
	{
		count_tiles(map[i], &exits, &collectables, &players);
		i++;
	}
	if (exits != 1 || collectables < 1 || players != 1)
		return (FALSE);
	return (TRUE);
}

/* Returns 1 if the tile is valid */
int	is_tile_valid(char tile)
{
	return (tile == MAP_EXIT \
		|| tile == MAP_ENTRY \
		|| tile == MAP_WALL \
		|| tile == MAP_FLOOR \
		|| tile == MAP_COLLECTABLE \
		|| tile == MAP_ENEMY);
}

void	count_tiles(char *s, int *exits, int *collectables, int *players)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == MAP_EXIT)
			(*exits)++;
		if (s[i] == MAP_ENTRY)
			(*players)++;
		if (s[i] == MAP_COLLECTABLE)
			(*collectables)++;
		i++;
	}
}

int	check_newlines(char *map)
{
	int	newlines;
	int	i;

	i = 0;
	newlines = 0;
	while (map[i])
	{
		if (map[0] == '\n')
			return (ft_printf("Too many newlines. Is first line empty?\n"), -1);
		if (map[i] == '\n')
		{
			newlines++;
			if (newlines == 2)
				return (ft_printf("Empty line in map\n"), -1);
		}
		else if (map[i] != '\n')
			newlines = 0;
		i++;
	}
	return (POSITIVE);
}
