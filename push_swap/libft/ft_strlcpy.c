/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:06:47 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 18:09:06 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
copies a string to another, with a maximum size limit for the destination string.
3 parameters: 1st = a pointer to the destination string
2nd = a pointer to the source string
3rd = maximum size of the destination string.
Returns: the total length of the source string.
*/

/*
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	unsigned int	s;
	char	*source;
	char	destination[20] = "12334567891011121314";

	s = 5;
	source = "123456789";
	s = ft_strlcpy(destination, source, s);
	printf("dest is: %s || size is %d", destination, s);
	return (s);
}*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				l;

	l = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (l);
	else if (dstsize != 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l);
}
