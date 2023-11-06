/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 15:38:35 by ari               #+#    #+#             */
/*   Updated: 2023/02/13 20:16:43 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*

Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.

*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*curr_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		curr_node = ft_lstnew((*f)(lst->content));
		if (!curr_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, curr_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

void	*dup_content(void *content)
{
	char	*dup;

	dup = ft_strdup((char *)content);
	return ((void *)dup);
}

int	main(void)
{
	t_list	*lst;
	t_list	*new_list;

	lst = ft_lstnew("apple");
	ft_lstadd_back(&lst, ft_lstnew("banana"));
	ft_lstadd_back(&lst, ft_lstnew("cherry"));
	new_list = ft_lstmap(lst, dup_content, free);
	print_list(new_list);
	ft_lstclear(&new_list, free);
	return (0);
}*/
