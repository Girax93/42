/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:29:05 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:20:35 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
Adds a node to the end of the list.
Accepts the head of the list as the first parameter
And the node to be added to the end as the last parameter
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next != NULL)
		lst = &(*lst)->next;
	(*lst)->next = new;
}

// The main first adds 3 nodes to the list, with content-
// values 1, 2 and 3. Then it makes a new node with 4 as content.
// It then uses ft_lstadd_back to add it to the end of the list.

/*
#include <stdio.h>

int main(void)
{
	t_list *head = NULL;
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	t_list *new = (t_list *)malloc(sizeof(t_list));

	node1->content = malloc(sizeof(int));
	node2->content = malloc(sizeof(int));
	node3->content = malloc(sizeof(int));
	new->content = malloc(sizeof(int));
	*(int *)node1->content = 1;
	*(int *)node2->content = 2;
	*(int *)node3->content = 3;
	*(int *)new->content = 4;
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	head = node1;

	ft_lstadd_back(&head, new);

	printf("Linked list after adding a new node:\n");
	t_list *current = head;
	while (current != NULL)
	{
	    printf("%d ", *(int *)current->content);
	    current = current->next;
	}
	printf("\n");

	return 0;
}*/
