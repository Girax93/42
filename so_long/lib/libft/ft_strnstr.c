/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:23:35 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:22:31 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
"strchr on steriods/for strings"
The strnstr function finds the first occurrence of a substring in a string,
but with a maximum size limit for the search.
3 parameters: 1st = a pointer to the string to be searched.
2nd = a pointer to the substring to be searched for.
3rd = maximum size of the search.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && i + j < len)
		{
			if (j == needle_len - 1)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char haystack[] = "HelWo, World! hehehe";
    char needle[] = "World";
    char *result;
    size_t len = 15;

    result = ft_strnstr(haystack, needle, len);
    if (result) {
        printf("Substring found: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}*/
