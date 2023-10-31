/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:06:29 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:22:13 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
Appends a string to anohter, with a maximum limit for the dest string.
3 parameters: 1st = pointer to the destination string
2nd = pointer to the source string
3rd = the maximum size of the destination string.
Returns: The total length of the string it tried to create.
*/

/*
#include<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int	main(void)
{
	char	str1[] = "amaaaz";
	char	str2[] = "eballzzz!";

	ft_strcat(str1, str2);

	printf("%s", ft_strcat(str1, str2));
	return (0);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	if (srclen < dstsize - dstlen)
		ft_memcpy(dst + dstlen, src, srclen + 1);
	else
	{
		ft_memcpy(dst + dstlen, src, dstsize - dstlen - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dstlen + srclen);
}
