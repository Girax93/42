/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:50:10 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/11 17:50:29 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// Actually sets the size values of the map
// by assigning the following values:
// game->map_width & game->map_height
void	size_map(t_game *game, char **map)
{
	int	rows;

	if (!map || !map[0])
	{
		game->map_width = 0;
		game->map_height = 0;
		return ;
	}
	game->map_width = ft_strlen(map[0]) * 32;
	rows = 0;
	while (map[rows])
	{
		rows++;
	}
	game->map_height = rows * 32;
}

// Simply compares the last 4 characters of the filename of the map to ".ber"
int	check_extension(const char *filename)
{
	int	len;

	len = ft_strlen(filename);
	if (len < 4)
		return (FALSE);
	if (ft_strncmp(&filename[len - 4], ".ber", 4) == 0)
		return (TRUE);
	return (FALSE);
}

// Simply reads the map.ber file, and transfers the text into
// a char **map variable which is returned.
char	**read_map(char *script_map)
{
	int		fd;
	char	*temp_map;
	char	**map;
	int		n;

	temp_map = ft_calloc(BUFF_SIZE + 1, sizeof(char));
	if (!temp_map)
		return (NULL);
	fd = open(script_map, O_RDONLY);
	if (fd < 0)
	{
		cleanup(temp_map, fd);
		return (NULL);
	}
	n = read(fd, temp_map, BUFF_SIZE);
	if (n == -1 || n == 0 || n == BUFF_SIZE || (check_newlines(temp_map) < 0))
	{
		cleanup(temp_map, fd);
		return (NULL);
	}
	map = ft_split(temp_map, '\n');
	cleanup(temp_map, fd);
	return (map);
}
