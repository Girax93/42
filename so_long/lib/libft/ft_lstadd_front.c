/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:44:04 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:20:42 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
Adds the node "new" at the beginning of a list.
It does this by pointing the "next" field of the "new" node
to the current head of the list.

The long main demonstrates this by adding the new content to the front
of the int array each time the node is passed to the function.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*new;
	t_list	*newer;
	t_list	*p;
	int		data1;
	int		data2;
	int		data3;

	data3 = 1;
	data1 = 21;
	data2 = 42;
	head = (t_list *)malloc(sizeof(t_list));
	head->content = &data1;
	head->next = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	new->content = &data2;
	new->next = NULL;
	ft_lstadd_front(&head, new);
	printf("The linked list contains the following values: ");
	p = head;
	while (p != NULL)
	{
		printf("%d ", *((int *)p->content));
		p = p->next;
	}
	printf("\n");
	newer = (t_list *)malloc(sizeof(t_list));
	newer->content = &data3;
	newer->next = NULL;
	ft_lstadd_front(&head, newer);
	printf("The linked list NOW contains the following values: ");
	p = head;
	while (p != NULL)
	{
		printf("%d ", *((int *)p->content));
		p = p->next;
	}
	printf("\n");
	return (0);
}*/
