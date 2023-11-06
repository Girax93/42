/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:30:20 by agrawe            #+#    #+#             */
/*   Updated: 2023/11/06 20:01:23 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Assigns the variable "target_pos" in each node of stack b.
void	set_target_pos(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_b;
	int		target_pos;

	tmp_b = *stack_b;
	while (tmp_b)
	{
		target_pos = find_target_pos(*stack_a, tmp_b);
		tmp_b->target_pos = target_pos;
		tmp_b = tmp_b->next;
	}
}

// Find the closest higher value in stack A, than it's current number.
// I.E if stack_a is 3, 4, 5 and stack_b is 2, 1, 0, target_pos of 2 = 1.
// If no higher value is found, find the lowest value in stack A
// I.E if stack_a is 1, 3, 2 and stack_b is 5, 4, 6, target_pos of 5 = 1
int	find_target_pos(t_stack *stack_a, t_stack *b)
{
	int	target_sorted;
	int	target_pos;

	target_sorted = INT_MAX;
	target_pos = closest_higher(stack_a, b, &target_sorted);
	if (target_sorted == INT_MAX)
		target_pos = lowest_sorted_pos(stack_a, &target_sorted);
	return (target_pos);
}

// Let's say at this point, we have these numbers:
// 5 2 7 3 1 4 6 8 sorted out like this: (left = top of stack).
// stack a: 8 5 7  stack b: 6 4 1 3 2
//
// if sorted_pos is higher in the top of stack_a than in stack_b,
// target_pos becomes equal to a.pos. So in our case target_pos = 7 on the
// first call to this function.
int	closest_higher(t_stack *stack_a, t_stack *stack_b, int *target_sorted)
{
	t_stack	*tmp_a;
	int		target_pos;

	tmp_a = stack_a;
	target_pos = 0;
	while (tmp_a)
	{
		if (tmp_a->sorted_pos > stack_b->sorted_pos \
			&& tmp_a->sorted_pos < *target_sorted)
		{
			*target_sorted = tmp_a->sorted_pos;
			target_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	return (target_pos);
}

int	lowest_sorted_pos(t_stack *stack_a, int *target_sorted)
{
	t_stack	*tmp_a;
	int		target_pos;

	tmp_a = stack_a;
	target_pos = 0;
	while (tmp_a)
	{
		if (tmp_a->sorted_pos < *target_sorted)
		{
			*target_sorted = tmp_a->sorted_pos;
			target_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	return (target_pos);
}

// cost_a is the cost of getting to the right position in stack A,
// * Assuming it is on the top of stack_b. (push to A is not counted)
// * counts the amount of ra, rra or sa's needed.
// cost_b is the cost of getting the element to the top of the B stack
// * counting the amount of moves (rb, rrb, sb).
// cost is negative doing a reverse move is faster. I.E rb 1 time = -1
void	get_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_b;
	int		size_a;
	int		size_b;
	int		half_size_a;
	int		half_size_b;

	tmp_b = *stack_b;
	size_a = list_size(*stack_a);
	size_b = list_size(*stack_b);
	half_size_a = size_a / 2;
	half_size_b = size_b / 2;
	while (tmp_b)
	{
		if (tmp_b->pos - 1 <= half_size_b)
			tmp_b->cost_b = tmp_b->pos - 1;
		else
			tmp_b->cost_b = (size_b - tmp_b->pos + 1) * -1;
		if (tmp_b->target_pos - 1 <= half_size_a)
			tmp_b->cost_a = tmp_b->target_pos - 1;
		else
			tmp_b->cost_a = (size_a - tmp_b->target_pos + 1) * -1;
		tmp_b = tmp_b->next;
	}
}
