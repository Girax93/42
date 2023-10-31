/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:07:42 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 17:00:23 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
checks if a character is printable.
1 parameter: the character to be checked.
*/

/*
#include <stdio.h>

int	ft_isprint(int c);

int	main(void)
{
	char	ch;

	ch = 20;
	if (ft_isprint(ch) > 0)
		printf("Yep, isprint is %d", ft_isprint(ch));
	else
		printf("Nope, isprint is %d", ft_isprint(ch));
	return (0);
}*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
