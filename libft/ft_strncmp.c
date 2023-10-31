/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:38:31 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 18:29:28 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compares up to "n" characters of two strings.
3 parameters: 1st = a pointer to the first string
2nd = a pointer to the second string
3rd = the maximum number of characters to compare.
Returns: 
0 if the strings are equal
a negative value if the 1st non-matching char in s1 is less than in s2.
a postivie value if the 1st non-matching char in s1 is greater than in s2.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "";
	char	str2[] = "";
	int	res;

	res = strncmp(str1, str2, 5);
	//res = ft_strncmp(str1, str2, 5);
	printf("The result is %d\n", res);
	return (0);
}*/
