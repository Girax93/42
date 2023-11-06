/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:14:43 by ari               #+#    #+#             */
/*   Updated: 2023/02/12 18:55:44 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Counts the length of a string, including the NULL character.
"abc" returns 3 due to a = 0, b = 1, c = 2, NULL = 3.
1 parameter: the string to be counted.
Returns: the length of the string
*/

/*
#include <stdio.h>

size_t	ft_strlen(const char *s);

int	main(void)
{
	char	*s;

	s = "bitchfight";
	printf("the length of \"%s\" is %ld, including the NULL\n", s, ft_strlen(s));
	return (0);
}
*/

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
