/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 21:57:26 by ari               #+#    #+#             */
/*   Updated: 2023/02/05 12:19:24 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Sets all the bytes of a memory area to zero. 
2 parameters: the first is a pointer to the memory area, 
the second is the number of bytes to be set to zero.
*/

void	ft_bzero(void *ptr, size_t num);
/*
int	main(void)
{
	char	array[100];

	ft_bzero(array, 100);
	return (0);
}*/

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*mem;
	size_t			i;

	i = -1;
	mem = (unsigned char *)ptr;
	while (++i < num)
		mem[i] = '\0';
}
