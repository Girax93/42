/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:55:41 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:22:00 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
creates a duplicate of a string.
1 parameter: a pointer to the string to be duplicated.
returns: a pointer to the duplicated string.
*/

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;

	len = 0;
	while (s[len])
		len++;
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_memcpy (dup, s, len + 1);
	return (dup);
}
/*
#include <stdio.h>

int main()
{
    char *original = "hello, world!";
    char *copy = ft_strdup(original);
    if (copy == NULL) {
        printf("Error allocating memory!\n");
        return 1;
    }
    printf("Original string: %s\n", original);
    printf("Duplicated string: %s\n", copy);
    free(copy);
    return 0;
}*/
