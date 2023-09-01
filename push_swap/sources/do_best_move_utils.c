/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_best_move_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:29:05 by agrawe            #+#    #+#             */
/*   Updated: 2023/08/29 18:42:44 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// reverse rotates both stacks until one of them is in position
void	rev_rot_ab(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		reverse_rotate_ab(a, b);
		(*cost_a)++;
		(*cost_b)++;
	}
}

// rotates both stacks until one of them is in position
void	rot_ab(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		rotate_ab(a, b);
		(*cost_a)--;
		(*cost_b)--;
	}
}

// rotates a until it is in position
void	rotate_a_to_pos(t_stack **stack_a, int *cost_a)
{
	while (*cost_a > 0)
	{
		rotate_a(stack_a);
		(*cost_a)--;
	}
	while (*cost_a < 0)
	{
		reverse_rotate_a(stack_a);
		(*cost_a)++;
	}
}

// rotates b until it is in position
void	rotate_b_to_pos(t_stack **stack_b, int *cost_b)
{
	while (*cost_b > 0)
	{
		rotate_b(stack_b);
		(*cost_b)--;
	}
	while (*cost_b < 0)
	{
		reverse_rotate_b(stack_b);
		(*cost_b)++;
	}
}
