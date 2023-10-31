/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 16:39:02 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:22:46 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

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
