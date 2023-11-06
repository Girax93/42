/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 13:07:19 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 17:14:16 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
copies one memory area to another, even if the areas overlap. 
3 parameters: 1st = a pointer to the destination memory area
2nd = a pointer to the source memory area
3rd = the number of bytes to copy.
*/

void	*ft_memmove(void *dst, const void *src, size_t n);
/*
#include <string.h>
#include <stdio.h>

int main(void)
{
  int str[] = {100, 200, 300, 400 , 500};

  if (ft_memmove(str + 2, str, sizeof str) == NULL) 
  {
    printf("Error: memcpy failed\n");
    return 1;
  }

  printf("src = %d\n", str[2]);
  printf("dest = %d\n", str[2]);

  return 0;
}*/

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	else if (dst > src)
		while (n-- > 0)
			((unsigned char *)dst)[n] = ((const char *)src)[n];
	else
		while (++i < n)
			((unsigned char *)dst)[i] = ((const char *)src)[i];
	return (dst);
}
