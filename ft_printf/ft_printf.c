/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 17:35:29 by agrawe            #+#    #+#             */
/*   Updated: 2023/03/28 13:38:02 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include <stdio.h>

/*
int	main(void)
{
	unsigned long	u;
	int				numft;
	int				numor;
//	int				d;
//	char			c;
//	char			*s;
//	char			*p;

	u = LONG_MIN;
//	s = NULL;
//	c = 'X';
//	d = -2147483648;
//	p = &c;
	numft = ft_printf(" %%%% \n");
	numor = printf(" %%%% \n");
//	numft = ft_printf("");
//	numor = printf("");
	printf("|%d| \n", numft);
	printf("|%d| \n", numor);
	return (0);
}
*/

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		charcount;

	i = 0;
	charcount = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			ft_typefilter(&format[++i], args, &charcount);
			i++;
			continue ;
		}
		else
			ft_putcharc(format[i], &charcount);
		i++;
	}
	va_end(args);
	return (charcount);
}

void	ft_typefilter(const char *format, va_list args, int *charcount)
{
	int	i;

	i = 0;
	if (format[i] == '%')
	{
		ft_putcharc(format[i], charcount);
	}
	if (*format == 'd' || *format == 'i')
		ft_putnbrc(va_arg(args, int), charcount);
	if (*format == 'c')
		ft_putcharc(va_arg(args, int), charcount);
	if (*format == 's')
		ft_putstrc(va_arg(args, char *), charcount);
	if (*format == 'p')
		ft_printaddressc(va_arg(args, unsigned long), charcount, *format);
	if (*format == 'x' || *format == 'X')
		ft_printhexuc(va_arg(args, unsigned long), charcount, *format);
	if (*format == 'u')
		ft_putunsintc(va_arg(args, long long), charcount);
	return ;
}

void	ft_putcharc(char c, int *charcount)
{
	*charcount += write(1, &c, 1);
}
