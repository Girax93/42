/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:11:36 by ari               #+#    #+#             */
/*   Updated: 2023/02/04 21:29:05 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
searches for a character in a string. 
2 parameters: 1st = a pointer to the string
2nd = the character to search for.
returns a pointer to the first occurrence of the character in the string,
or a null pointer if the character is not found.
*/

char	*ft_strchr(const char *str, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*str)
	{
		if (*str == uc)
			return ((char *)str);
		str++;
	}
	if (*str == uc)
		return ((char *)str);
	return (NULL);
}
/*
#include<stdio.h>

int	main(void)
{
	char s[] = "teste";
	char *p = ft_strchr(s, 'e' + 256);
	if (p != NULL) {
	  printf("Found 'e' at index %ld\n", p - s);
	} else {
	  printf("Could not find 'w'\n");
	}
	return 0;
}*/
