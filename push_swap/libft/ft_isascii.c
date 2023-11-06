/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:03:05 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 16:58:17 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
checks if a character is an ASCII character. 
1 parameter: the character to be checked.
*/

/*
#include <stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	char	ch;

	ch = 'a';
	if (ft_isascii(ch))
		printf("%d is true\n", ch);
	else
		printf("%d is false\n", ch);
	return (0);
}*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
