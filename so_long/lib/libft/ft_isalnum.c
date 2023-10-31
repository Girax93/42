/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:02:51 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 16:55:52 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
checks if a character is alphanumeric (a letter or a number).
1 parameter: The character to be checked.
*/

/*
#include <stdio.h>

int	ft_isalnum(int c);

int	main(void)
{
	char	ch;

	ch = 'A';
	if (ft_isalnum(ch))
		printf("%c is a digit or alpha\n", ch);
	else
		printf("%c is NOT a digit or alpha\n", ch);
	printf("the ft_isalnum function returns %d in this case.", ft_isalnum(ch));
	return (0);
}*/

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}
