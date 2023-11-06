/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:30:07 by agrawe            #+#    #+#             */
/*   Updated: 2023/11/06 20:37:50 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

// Helper function to add numbers from a string to the stack
void	add_numbers_to_stack(t_stack **stack_a, char *str, int position)
{
	char		**numbers;
	long int	num;
	int			j;

	j = 0;
	numbers = ft_split(str, ' ');
	while (numbers && numbers[j])
	{
		num = ft_atol(numbers[j]);
		if (num > INT_MAX || num < INT_MIN)
		{
			write_error();
			free_split(numbers);
			return ;
		}
		add_to_end(stack_a, create_node(position, (int)num));
		j++;
	}
	free_split(numbers);
}

// The modified fill_stack_a function
t_stack	*fill_stack_a(int ac, char **av)
{
	t_stack		*stack_a;
	int			i;
	long int	num;

	i = 1;
	stack_a = NULL;
	while (i < ac)
	{
		if (ft_strchr(av[i], ' ') != NULL)
			add_numbers_to_stack(&stack_a, av[i], i);
		else
		{
			num = ft_atol(av[i]);
			if (num > INT_MAX || num < INT_MIN)
			{
				write_error();
				return (NULL);
			}
			add_to_end(&stack_a, create_node(i, (int)num));
		}
		i++;
	}
	sorted_pos(stack_a);
	return (stack_a);
}

/*
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
} */
