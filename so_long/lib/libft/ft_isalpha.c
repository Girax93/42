/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:02:57 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 16:59:50 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
checks if a character is a letter.
1 parameter: the character to be checked.
*/

/*
#include <stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	int i = 'a';
	while (i <= 'z')
	{
		printf("%d", ft_isalpha(i));
		i++;
	}
	return (0);
}*/

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
