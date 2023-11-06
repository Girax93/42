/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 23:03:39 by bsengeze          #+#    #+#             */
/*   Updated: 2023/11/06 20:33:31 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Bool: is the stack sorted?
// returning 1 if the value in the current node is always less
// than the value in the next node.
int	sorted_check(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->val > stack->next->val)
			return (0);
		stack = stack-> next;
	}
	return (1);
}

// Assigns the sorted_pos value for each node.
// ex: if our numbers are 7, 4, 5, sorted_pos =
// 7=3, 4=1, 5=2.
void	sorted_pos(t_stack *stack)
{
	int		size;
	int		highest;
	int		current_highest;
	t_stack	*current;

	size = list_size(stack);
	highest = find_highest(stack);
	while (size > 0)
	{
		current = stack;
		current_highest = INT_MIN;
		while (current)
		{
			if (current->sorted_pos == 0 && current->val == highest)
			{
				current->sorted_pos = size;
				size--;
			}
			if (current->val > current_highest && current->sorted_pos == 0)
				current_highest = current->val;
			current = current->next;
		}
		highest = current_highest;
	}
}
