/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:55:20 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:21:17 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/* compares "n" bytes of two memory areas. */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
#include <stddef.h>
#include <stdio.h>
#include <string.h>

int main() {
  char a[] = "abc";
  char b[] = "abc";
  char c[] = "cbd";

  if (ft_memcmp(a, b, sizeof(a)) == 0)
    printf("a and b are identical\n");
  else
    printf("a and b are different\n");

  if (ft_memcmp(a, c, sizeof(a)) == 0)
    printf("a and c are identical\n");
  else
    printf("a and c are different\n");
  return 0;
}*/
