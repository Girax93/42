/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:00:04 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:20:29 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_intlen(int n)
{
	int	len;
	int	sign;

	sign = 0;
	len = 0;
	if (n < 0)
		len++;
	if (n == 0)
		sign = 1;
	while (n || sign == 1)
	{
		if (sign == 1)
			sign = 0;
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	const char	digits[10] = "0123456789";

	len = ft_intlen(n);
	result = (char *)malloc(sizeof(char) * len + 1);
	if (!result)
		return (NULL);
	if (n < 0)
		result[0] = '-';
	if (n == 0)
		result[0] = '0';
	result[len] = '\0';
	len -= 1;
	while (n)
	{
		if (n > 0)
			result[len--] = digits[n % 10];
		else if (n < 0)
			result[len--] = digits[n % 10 * -1];
		n /= 10;
	}
	return (result);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	a;

	a = 666;
	printf("%s", ft_itoa(a));
	return (0);
}*/
