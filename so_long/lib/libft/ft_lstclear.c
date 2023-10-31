/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 01:12:46 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:20:47 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
}

//The main below makes 3 nodes, prints them first, and then prints the
//message "List cleared successfully if there is no value in the specified
//node. You can test the different nodes by changing the value of **head.

/*
#include <stdio.h>

void print_content(void *content)
{
    printf("Content: %d\n", *(int*)content);
}

int main(void)
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    int content1 = 1;
    int content2 = 2;
    int content3 = 3;

    node1->content = &content1;
    node1->next = node2;
    node2->content = &content2;
    node2->next = node3;
    node3->content = &content3;
    node3->next = NULL;

    t_list **head = &node3;

    ft_lstclear(head, print_content);
    if (*head == NULL)
        printf("List cleared successfully\n");
    return 0;
}*/
