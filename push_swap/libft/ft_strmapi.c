/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 22:52:48 by ari               #+#    #+#             */
/*   Updated: 2023/02/05 00:25:18 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Applies the function ’f’ to each character of the
string ’s’, and passing its index as first argument
to create a new string (with malloc(3)) resulting
from successive applications of ’f’.

2 Parameters: 1st = the string on which to initerate
2nd = the function to apply to each character

Returns: The string created from the successive applications of ’f’.
Returns NULL if the allocation fails

An example usage of this could be:
ft_strmapi("change me", to_upper)

In the example below, the first parameter (i) in to_upper
is voided because we don't need it.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * i + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>
char	to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	char	*str;

	str = ft_strmapi("hello, world!", to_upper);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
