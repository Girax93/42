/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:22:20 by ari               #+#    #+#             */
/*   Updated: 2023/10/29 16:39:38 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
converts a string to an integer.
1 parameter: the string to be converted.
*/

#include <string.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	sign = 1;
	num = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (sign * num);
}

/*
int main(void)
{
    char str[] = "+123";
    int result = ft_atoi(str);
    printf("%d", result);
    return (0);
}*/