/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:38:14 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 20:37:32 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Converts a single character to its lowercase equivalent. 
1 Parameter: the character to be converted
Returns: the lowercase equivalent of the character.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	else
		return (c);
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
  int a = 'A';
  printf("%c\n", ft_tolower(a));
  return 0;
}*/
