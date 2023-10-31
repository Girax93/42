/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:53:04 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/18 13:38:27 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//	These functions are relatively self explainatory.
//	So not every function will have a comment.

int	is_map_empty(char **map)
{
	if (map[0])
		return (TRUE);
	else
		return (FALSE);
}

int	is_map_rectangular(char **map)
{
	size_t	row_length;
	int		row_index;

	row_length = ft_strlen(map[0]);
	row_index = 1;
	while (map[row_index])
	{
		if (ft_strlen(map[row_index]) != row_length)
			return (FALSE);
		row_index++;
	}
	return (TRUE);
}

//	Map elements refers to the letters in map file.
//	Anything other than 1, 0, E, C, D and P is considered incorrect.
int	are_map_elements_correct(char **map)
{
	int	y;
	int	x;

	y = 0;
	while (map[y])
	{
		x = 0;
		while (map[y][x])
		{
			if (!is_tile_valid(map[y][x]))
				return (FALSE);
			x++;
		}
		y++;
	}
	return (TRUE);
}

int	is_map_surrounded_by_walls(char **map)
{
	size_t	width;
	size_t	height;
	size_t	i;

	width = ft_strlen(map[0]);
	height = 0;
	while (map[height])
		height++;
	i = 0;
	while (i < width)
	{
		if (map[0][i] != '1' || map[height - 1][i] != '1')
			return (FALSE);
		i++;
	}
	i = 0;
	while (i < height)
	{
		if (map[i][0] != '1' || map[i][width - 1] != '1')
			return (FALSE);
		i++;
	}
	return (TRUE);
}

int	check_map(char **map)
{
	if (is_map_empty(map) == FALSE)
		return (ft_printf(EMPTY_MSG), FALSE);
	if (is_map_rectangular(map) == FALSE)
		return (ft_printf(RECT_MSG), FALSE);
	if (are_map_elements_correct(map) == FALSE)
		return (ft_printf(WRONG_MSG), FALSE);
	if (is_map_surrounded_by_walls(map) == FALSE)
		return (ft_printf(WALL_MSG), FALSE);
	if (has_map_necessary_tiles(map) == FALSE)
		return (ft_printf(WRONG_MSG), FALSE);
	return (TRUE);
}
