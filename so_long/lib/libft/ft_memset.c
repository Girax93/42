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

#include "../../include/libft.h"

/* Parameters:
void *b : Takes a void pointer to memory location.
int c : the data/char/int to be put in that location
size_t len : the length of the input data.
Example: ft_memset(ptr, e, sizeof(char) * 5)
Would return a memory allocated with "eeeee" */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = b;
	while (len-- > 0)
		*ptr++ = c;
	return (b);
}

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