/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:31:39 by agrawe            #+#    #+#             */
/*   Updated: 2023/08/29 18:51:18 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Swap the first 2 elements at the top of a stack.
// Do nothing if there is only one or no elements
// 1. Error check - ensure there are more than 1 nodes in the stack.
// 2. Swap the top two elements
// 3. Updates the pos(itions) of the entire stack
void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	int		pos;

	if (!*stack || !(*stack)->next)
		return;
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	pos = 1;
	first = *stack;
	while (first)
	{
		first->pos = pos++;
		first = first->next;
	}
}

// sa
void	swap_a(t_stack **stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

//sb
void	swap_b(t_stack **stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

// sa and sb at the same time
void	swap_ab(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}
