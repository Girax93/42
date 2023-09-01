/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:31:49 by agrawe            #+#    #+#             */
/*   Updated: 2023/08/29 18:51:31 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Makes a new string without leading zeros if leading zeros are found.
void remove_leading_zeros(char *av)
{
    int i = 0;
    int start = 0;
    int first_non_zero = -1;

    if (ft_issign(av[i]) && av[i + 1] != '\0')
    {
        start = 1;
        i++;
    }
    while (av[i])
    {
        if (av[i] != '0')
        {
            first_non_zero = i;
            break;
        }
        i++;
    }
    if (i > start && first_non_zero != -1)
        ft_memmove(&av[start], &av[first_non_zero], ft_strlen(av) \
		- first_non_zero + 1);
    else if (start == 0 && first_non_zero == -1)
        av[1] = '\0';
}

// Simply writes "Error" to stdout,
// And exits the program
void	write_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}