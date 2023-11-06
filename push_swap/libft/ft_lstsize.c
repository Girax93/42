/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 19:55:22 by ari               #+#    #+#             */
/*   Updated: 2023/02/12 20:37:53 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts and returns the number of nodes in a list.
*/

int	ft_lstsize(t_list *lst)
{
	size_t	n;

	n = 0;
	while (lst)
	{
		n++;
		lst = lst->next;
	}
	return (n);
}

// This main creates 3 nodes, and passes the ft_lstsize function to printf.

/*
#include <stdio.h>

int	main(void)
{
	t_list	node1;
	t_list	node2;
	t_list	node3;

	node1.content = (void *)1;
	node1.next = &node2;
	node2.content = (void *)2;
	node2.next = &node3;
	node3.content = (void *)3;
	node3.next = NULL;
	printf("The length of the list is: %d\n", ft_lstsize(&node1));
	return (0);
}*/
