/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:12:56 by agrawe            #+#    #+#             */
/*   Updated: 2023/05/08 16:12:56 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/* Looks for a newline character in the given linked list. */

int	found_newline(t_list *map)
{
	int		i;
	t_list	*current;

	if (map == NULL)
		return (0);
	current = ft_lst_get_last(map);
	i = 0;
	while (current->content[i])
	{
		if (current->content[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

/* Returns a pointer to the last node in the map */

t_list	*ft_lst_get_last(t_list *map)
{
	t_list	*current;

	current = map;
	while (current && current->next)
		current = current->next;
	return (current);
}

/* Calculates the number of chars in the current line,
lincluding the trailing \n if there is one, and allocates memory accordingly. */

void	generate_line(char **line, t_list *map)
{
	int		i;
	int		len;

	len = 0;
	while (map)
	{
		i = 0;
		while (map ->content[i])
		{
			if (map->content[i] == '\n')
			{
				len++;
				break ;
			}
			len++;
			i++;
		}
		map = map->next;
	}
	*line = malloc(sizeof(char) * (len + 1));
}

/* Frees the entire map */

void	free_map(t_list *map)
{
	t_list	*current;
	t_list	*next;

	current = map;
	while (current)
	{
		free(current->content);
		next = current->next;
		free(current);
		current = next;
	}
	map = NULL;
}

int	slen(const char *str)
{
	int	len;

	len = 0;
	while (*(str++))
		len++;
	return (len);
}
