/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:30:51 by agrawe            #+#    #+#             */
/*   Updated: 2023/11/06 19:47:42 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// long int atoi to secure conversion of input values that exceeds int limits
long int	ft_atol(const char *str)
{
	long int	nb;
	int			isneg;

	isneg = 1;
	nb = 0;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			isneg = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		nb = (nb * 10) + (*str - '0');
		str++;
	}
	return (nb * isneg);
}

//finds highest val in the list
int	find_highest(t_stack *stack)
{
	int	highest;

	if (!stack)
		return (0);
	highest = stack->val;
	while (stack)
	{
		if (stack->val > highest)
			highest = stack->val;
		stack = stack->next;
	}
	return (highest);
}

// Returns the current pos of the lowest number in stack_a.
int	find_lowest_pos(t_stack **stack)
{
	t_stack	*current;
	t_stack	*lowest;

	if (!*stack)
		return (0);
	current = *stack;
	lowest = current;
	while (current)
	{
		if (current->sorted_pos < lowest->sorted_pos)
			lowest = current;
		current = current->next;
	}
	return (lowest->pos);
}

// Turns a negative number into a positive one :)
int	abs_num(int num)
{
	if (num < 0)
		num = num * -1;
	return (num);
}

// Simply checks if s1 is identical to s2.
// If the function returns 0, they are identical.
int	num_str_cmp(const char *s1, const char *s2)
{
	while (*s1 == '+' && *s2 == '+')
	{
		s1++;
		s2++;
	}
	if (*s1 == '+')
		s1++;
	else if (*s2 == '+')
		s2++;
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
