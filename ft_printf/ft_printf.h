/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:15:19 by ari               #+#    #+#             */
/*   Updated: 2023/03/28 13:38:27 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putnbrc(int n, int *charcount);
void	ft_putcharc(char c, int *charcount);
void	ft_putstrc(char *s, int *charcount);
void	ft_printaddressc(unsigned long p, int *charcount, char x);
void	ft_putunsintc(unsigned int n, int *charcount);
void	ft_printhexuc(unsigned int n, int *charcount, char x);
int		ft_printf(const char *format, ...);
void	ft_typefilter(const char *format, va_list args, int *charcount);

#endif
