/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:46:06 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 16:54:45 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
allocates memory for an array of elements and sets all bytes to zero. 
2 parameters: 1st = the number of elements in the array
2nd = the size of each element.
*/

/*

#include <stdio.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size);

int main() {
    // Allocate memory for 5 integers
    int *ptr = (int*) ft_calloc(5, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.");
    } else {
        int i = 0;
        while(i < 5) {
            printf("%d ", ptr[i]);
            i++;
        }
        free(ptr);
    }
    return 0;
}*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(size * nmemb);
	if (ptr != NULL)
	{
		i = 0;
		while (i < nmemb * size)
		{
			((unsigned char *)ptr)[i] = 0;
			i++;
		}
	}
	return (ptr);
}
