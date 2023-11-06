/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:30:07 by agrawe            #+#    #+#             */
/*   Updated: 2023/08/29 18:44:32 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// 1. Converts the argv to long int with atol (for safety)
// 2. Checks if the number is within an INT's parameters
// 3. If it is, then creates a new (FILLED) node, and adds it to
//    the end of stack_a, before assigning the sorted_pos values.
// PS! Check the create_node function in list_utils.c
t_stack	*fill_stack_a(int ac, char **av)
{
	t_stack		*stack_a;
	int			i;
	long int	num;

	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		num = ft_atol(av[i]);
		if (num > INT_MAX || num < INT_MIN)
			write_error();
		else
			add_to_end(&stack_a, create_node(i, (int)num));
		i++;
	}
	sorted_pos(stack_a);
	return (stack_a);
}
