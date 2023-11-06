/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:36:34 by ari               #+#    #+#             */
/*   Updated: 2023/02/16 22:11:58 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with the value of
the parameter ’content’. The variable’next’ is initialized to NULL.

In other words, this sets a new node of a linked list (additional nodes can be
added to the list later by modifying the "next" pointers of the existing nodes).
This can also be thought of as the last node of a list.

1 Parameter: content = the data to be passed to the "content" member of a
t_list struct.

Returns: The new node (ie: an int, and a NULL).
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}

/*
int		main(void)
{
	char	str[] = "lorem ipsum dolor sit";

	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\n%s\n", elem->content);
}*/
