/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 00:55:46 by ari               #+#    #+#             */
/*   Updated: 2023/02/13 18:33:59 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Deletes the content of a node, while "next" remains.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}

// The main below creates a node, prints it, and then deletes it, and then
// prints it again. We also make a del_int function to make it work.

/*
#include <stdio.h>

void del_int(void *content)
{
    free(content);
}

int main(void)
{
    int *content;
    t_list *node;

    content = (int*)malloc(sizeof(int));
    *content = 42;

    node = (t_list*)malloc(sizeof(t_list));
    node->content = content;
    node->next = NULL;

    printf("Before ft_lstdelone: %d\n", *(int*)node->content);
    ft_lstdelone(node, &del_int);
    printf("After ft_lstdelone: %p\n", node->content);
	// You can test the above printf also by changing to %d and
	// typecasting to int. It should result in segmentation fault.

    return (0);
}*/
