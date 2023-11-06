/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:01:36 by agrawe            #+#    #+#             */
/*   Updated: 2023/05/11 15:01:36 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
int		found_newline(t_list *map);
t_list	*ft_lst_get_last(t_list *map);
char	*read_and_map(int fd, t_list **map, int *readed_ptr);
void	add_to_map(t_list **map, char *buff, int readed);
void	extract_line(t_list *map, char **line);
void	generate_line(char **line, t_list *map);
void	clean_map(t_list **map);
int		slen(const char *str);
void	free_map(t_list *map);
#endif
