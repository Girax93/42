/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfuncts.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 21:55:59 by agrawe            #+#    #+#             */
/*   Updated: 2023/03/28 13:13:13 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrc(int n, int *charcount)
{
	char	c;

	if (n == -2147483648)
	{
		*charcount += write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		*charcount += write(1, "-", 1);
	}
	if (n >= 10)
		ft_putnbrc(n / 10, charcount);
	*charcount += 1;
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_putstrc(char *s, int *charcount)
{
	size_t	i;

	i = 0;
	if (!s)
		return (ft_putstrc("(null)", charcount));
	while (s[i])
	{
		*charcount += write(1, &s[i], 1);
		i++;
	}
}

void	ft_printaddressc(unsigned long n, int *charcount, char x)
{
	char	*hex_digits_lower;
	char	*hex_digits_upper;

	hex_digits_lower = "0123456789abcdef";
	hex_digits_upper = "0123456789ABCDEF";
	if (!n && x == 'p')
		return (ft_putstrc("(nil)", charcount));
	if (!n && (x == 'x' || x == 'X'))
		return (ft_putcharc('0', charcount));
	if (n / 16)
		ft_printaddressc(n / 16, charcount, x);
	else
	{
		if (x == 'p')
			ft_putstrc("0x", charcount);
	}
	if (x == 'x' || x == 'p')
		ft_putcharc(hex_digits_lower[n % 16], charcount);
	if (x == 'X')
		ft_putcharc(hex_digits_upper[n % 16], charcount);
}

void	ft_putunsintc(unsigned int n, int *charcount)
{
	char	c;

	if (n >= 10)
		ft_putunsintc(n / 10, charcount);
	*charcount += 1;
	c = n % 10 + '0';
	write(1, &c, 1);
}

void	ft_printhexuc(unsigned int n, int *charcount, char x)
{
	char	*hex_digits_lower;
	char	*hex_digits_upper;

	hex_digits_lower = "0123456789abcdef";
	hex_digits_upper = "0123456789ABCDEF";
	if (!n)
		return (ft_putcharc('0', charcount));
	if (n / 16)
		ft_printhexuc(n / 16, charcount, x);
	if (x == 'x')
		ft_putcharc(hex_digits_lower[n % 16], charcount);
	if (x == 'X')
		ft_putcharc(hex_digits_upper[n % 16], charcount);
}
