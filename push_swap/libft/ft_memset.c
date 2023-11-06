/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:08:47 by ari               #+#    #+#             */
/*   Updated: 2023/01/19 19:49:22 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len);
/*
#include <stdio.h>

int	main(void)
{
	char	buffer[10];
	int		i;

	i = 0;
	ft_memset (buffer, 'e', sizeof(char) * 5);
	ft_memset (buffer + 5, 'h', sizeof(char) * 5);
	while (buffer[i] != '\0')
	{
		printf("%c", buffer[i]);
		i++;
	}
	printf("\n");
	printf("there are %d chars", i);
	printf("\n");
	return (0);
}*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
		*ptr++ = c;
	return (b);
}
