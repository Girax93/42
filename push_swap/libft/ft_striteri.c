/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:54:05 by ari               #+#    #+#             */
/*   Updated: 2023/02/05 14:29:03 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function ’f’ on each character of the string passed as argument.
The address of each character is passed to ’f’ to be modified if necessary
2 Parameters: 1st = the string to be modified
2nd = the function that is used to modify the string. 
Returns = Nothing. Modifies the string in place.
Note: Same as strmapi, except it doesn't create a new, modified string.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
// add_index adds the number of the current index to the current index.

#include <stdio.h>

void	add_index(unsigned int i, char *c)
{
	*c = *c + i;
}

int	main(void)
{
	char	str[] = "abcdef";

	ft_striteri(str, add_index);
	printf ("%s\n", str);
	return (0);
}*/
