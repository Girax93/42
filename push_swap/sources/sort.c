/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:30:32 by agrawe            #+#    #+#             */
/*   Updated: 2023/08/29 18:48:39 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// if the highest number is on top, do: ra, then sa if still unsorted.
// if 2nd number is the highest, do: rra, then sa if still unsorted.
// if the highest number is on the bottom, do: sa.

void	sort_three(t_stack **stack_a)
{
	int	highest;

	if (sorted_check(*stack_a) == 1)
		return ;
	highest = find_highest(*stack_a);
	if ((*stack_a)->val == highest)
		rotate_a(stack_a);
	else if ((*stack_a)->next->val == highest)
		reverse_rotate_a(stack_a);
	else
	{
		swap_a(stack_a);
		return ;
	}
	if (sorted_check(*stack_a) == 0)
		swap_a(stack_a);
}

// For stacks bigger than 6:
// (While) counts up to size, or until we have pushed half the stack.
// -> OR until we have iterated through the entire stack once.
// Then, pushes half the stack over to stack b, BUT starting with
// the numbers that are in the lesser half of the stack. After
// pushing half the stack, the order doesn't matter, so it just pushes
// the rest, except for 3. ie:
// 5 2 7 3 1 4 6 8 would turn into this, in this order (left = top of stack):
// stack a: 8 5 7  stack b: 6 4 1 3 2
void	sorted_push_except_three(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	pushed;
	int	count;
	int	half_size;

	size = list_size(*stack_a);
	half_size = size / 2;
	pushed = 0;
	count = 0;
	while ((size > 6) && (size > count) && (pushed < half_size))
	{
		if ((*stack_a)->sorted_pos <= half_size)
		{
			push_b(stack_a, stack_b);
			pushed++;
		}
		else
			rotate_a(stack_a);
		count++;
	}
	while (size - pushed > 3)
	{
		push_b(stack_a, stack_b);
		pushed++;
	}
}

void	sort_big(t_stack **stack_a, t_stack **stack_b)
{
	sorted_push_except_three(stack_a, stack_b);
	sort_three(stack_a);
	while (*stack_b)
	{
		set_target_pos(stack_a, stack_b);
		get_cost(stack_a, stack_b);
		do_best_move(stack_a, stack_b);
	}
	if (!sorted_check(*stack_a))
		shift_stack(stack_a);
}

// shifts stack a until the lowest value is at the top.
void	shift_stack(t_stack **stack_a)
{
	int	pos_of_lowest;
	int	size;
	int	rev_rotations_required;

	size = list_size(*stack_a);
	pos_of_lowest = find_lowest_pos(stack_a) - 1;
	if (pos_of_lowest > size / 2)
	{
		rev_rotations_required = (size - pos_of_lowest);
		while (rev_rotations_required--)
			reverse_rotate_a(stack_a);
	}
	else
	{
		while (pos_of_lowest--)
			rotate_a(stack_a);
	}
}

void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = list_size(*stack_a);
	if (size == 2 && !sorted_check(*stack_a))
		swap_a(stack_a);
	else if (size == 3 && !sorted_check(*stack_a))
		sort_three(stack_a);
	else if (size > 3 && !sorted_check(*stack_a))
		sort_big(stack_a, stack_b);
 }

