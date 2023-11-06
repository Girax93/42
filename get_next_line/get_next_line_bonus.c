/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:12:32 by agrawe            #+#    #+#             */
/*   Updated: 2023/05/08 16:12:32 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static t_list	*map = NULL;
	char			*line;
	int				readed;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	readed = 1;
	line = NULL;
	if (!read_and_map(fd, &map, &readed) || map == NULL )
		return (NULL);
	extract_line(map, &line);
	clean_map(&map);
	if (line[0] == '\0')
	{
		free_map(map);
		map = NULL;
		free(line);
		return (NULL);
	}
	return (line);
}

/* Uses read() to add characters to the map */

char	*read_and_map(int fd, t_list **map, int *readed_ptr)
{
	char	*buff;

	while (!found_newline(*map) && *readed_ptr != 0)
	{
		buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!buff)
			return (NULL);
		*readed_ptr = (int)read(fd, buff, BUFFER_SIZE);
		if ((*map == NULL && *readed_ptr == 0) || *readed_ptr == -1)
		{
			free_map(*map);
			*map = NULL;
			free(buff);
			return (NULL);
		}
		buff[*readed_ptr] = '\0';
		add_to_map(map, buff, *readed_ptr);
		free(buff);
	}
	return ("lol");
}

/* Adds the content of the buffer until \n to the end of the map */

void	add_to_map(t_list **map, char *buff, int readed)
{
	int		i;
	t_list	*last;
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return ;
	new_node->next = NULL;
	new_node->content = malloc(sizeof(char) * (readed + 1));
	if (new_node->content == NULL)
		return ;
	i = 0;
	while (buff[i] && i < readed)
	{
		new_node->content[i] = buff[i];
		i++;
	}
	new_node->content[i] = '\0';
	if (*map == NULL)
	{
		*map = new_node;
		return ;
	}
	last = ft_lst_get_last(*map);
	last->next = new_node;
}

/* Extracts all characters from the map and stores them in the output line
Note: stops after the first \n it encounters */

void	extract_line(t_list *map, char **line)
{
	int		i;
	int		j;

	if (map == NULL)
		return ;
	generate_line(line, map);
	if (*line == NULL)
		return ;
	j = 0;
	while (map)
	{
		i = 0;
		while (map->content[i])
		{
			if (map->content[i] == '\n')
			{
				(*line)[j++] = map->content[i];
				break ;
			}
			(*line)[j++] = map->content[i++];
		}
		map = map->next;
	}
	(*line)[j] = '\0';
}

/* After extracting the line that was read, we don't need those characters
anymore. This function clears the map so only the characters that have not
been returned at the end of get_next_line() remain in our static map. */

void	clean_map(t_list **map)
{
	t_list	*last;
	t_list	*clean;
	int		i;
	int		j;

	clean = malloc(sizeof(t_list));
	if (map == NULL || clean == NULL)
		return ;
	clean->next = NULL;
	last = ft_lst_get_last(*map);
	i = 0;
	while (last->content[i] && last->content[i] != '\n')
		i++;
	if (last->content && last->content[i] == '\n')
		i++;
	clean->content = malloc(sizeof(char) * ((slen(last->content) - i) + 1));
	if (clean->content == NULL)
		return ;
	j = 0;
	while (last->content[i])
		clean->content[j++] = last->content[i++];
	clean->content[j] = '\0';
	free_map(*map);
	*map = clean;
}
