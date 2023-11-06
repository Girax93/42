/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_best_move.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:29:25 by agrawe            #+#    #+#             */
/*   Updated: 2023/08/29 18:42:53 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// finds the node in b that has lowest total cost and moves it to target pos
// total_cost = absolute(cost_a) + absolute(cost_b)
// current_best = the node in stack_b with the current lowest total cost.
void	do_best_move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp_b;
	t_stack	*current_best;
	int		total_cost;
	int		min_cost;

	tmp_b = *stack_b;
	current_best = NULL;
	min_cost = INT_MAX;
	while (tmp_b)
	{
		total_cost = abs_num(tmp_b->cost_a) + abs_num(tmp_b->cost_b);
		if (min_cost > total_cost)
		{
			min_cost = total_cost;
			current_best = tmp_b;
		}
		tmp_b = tmp_b->next;
	}

	if (current_best)
		move_to_a(stack_a, stack_b, current_best->cost_a, current_best->cost_b);
}

// Prepares each stack before pushing stack_b to stack_a.
// This is done by finding the best way to rotate both stacks before pushing.
// If both stacks can be rotated at the same time, it will do that.
// If not, then the stacks will be moved individually.
void	move_to_a(t_stack **stack_a, t_stack **stack_b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		rev_rot_ab(stack_a, stack_b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		rot_ab(stack_a, stack_b, &cost_a, &cost_b);
	rotate_a_to_pos(stack_a, &cost_a);
	rotate_b_to_pos(stack_b, &cost_b);
	push_a(stack_a, stack_b);
}
