/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:07:35 by ari               #+#    #+#             */
/*   Updated: 2023/01/24 17:57:42 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/* checks if a character is a digit. */

/*
#include <stdio.h>

int	ft_isdigit(int c);

int	main(void)
{
	printf("isdigit is %d\n", ft_isdigit('N'));
	return (0);
}*/

int	ft_isdigit(int c)
{
	return ((c >= '0' && c <= '9'));
}
