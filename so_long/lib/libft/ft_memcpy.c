/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:08:14 by ari               #+#    #+#             */
/*   Updated: 2023/01/29 14:46:21 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
copies one memory area to another.
3 parameters: 1st = a pointer to the destination memory area
2nd = a pointer to the source memory area
3rd = the number of bytes to copy.
*/

/*
void	*ft_memcpy(void *dest, const void *src, size_t n);

int main(void) {
  char src[] = "Hello, world!";
  char dest[sizeof src];

  if (ft_memcpy(dest, src, sizeof src) == NULL)
  {
    printf("Error: memcpy failed\n");
    return 1;
  }

  printf("src = %s\n", src);
  printf("dest = %s\n", dest);

  return 0;
}*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = ((const char *)src)[i];
	return (dest);
}
