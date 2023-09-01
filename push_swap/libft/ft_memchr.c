/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:34:52 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 17:02:50 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
searches for a character in a memory area of "n" bytes.
3 parameters: 1st = a pointer to the memory area
2nd = the character to search for
3rd = the number of bytes to search within the memory area
*/

void	*ft_memchr(const void *str, int c, size_t n);
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Like a needle in a haystack";
	char	c = 'h';
	int		n = ft_strlen(str);
	char	*res;

    res = ft_memchr(str, c, n);
	if	(res) 
		printf("Char '%c' is at index %ld in string: %s\n", c, res - str, str);
	else
		printf("The character '%c' is not found in the string: %s\n", c, str);
	return 0;
}*/

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	s = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
