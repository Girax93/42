/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 20:38:32 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:21:00 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
returns the last node in a list
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// Main creates 3 nodes and returns the last one.

/*
#include <stdio.h>

int	main(void)
{
	t_list	node1;
	t_list	node2;
	t_list	node3;
	t_list	*last;
	int		content1;
	int		content2;
	int		content3;

	content1 = 1;
	content2 = 2;
	content3 = 3;
	node1.content = &content1;
	node1.next = &node2;
	node2.content = &content2;
	node2.next = &node3;
	node3.content = &content3;
	node3.next = NULL;
	last = ft_lstlast(&node1);
	if (last)
		printf("The last node contains: %d\n", *((int *)last->content));
	else
		printf("The list is empty.\n");
	return (0);
}*/
