/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:39:02 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 20:38:12 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Converts a single character to its uppercase equivalent. 
1 Parameter: the character to be converted
Returns: the uppercase equivalent of the character.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	else
		return (c);
	return (c);
}
/*
#include <stdio.h>

int main(void)
{
  int a = 'a';
  printf("%c\n", ft_toupper(a));
  return 0;
}*/
