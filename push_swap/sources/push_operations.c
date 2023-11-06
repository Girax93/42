/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:31:00 by agrawe            #+#    #+#             */
/*   Updated: 2023/11/06 20:00:02 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// 1. Take the top element from stack_b and push to stack_a
// 2. Update positions in stack_a
// 3. Update positions in stack_b
// NB! Does nothing if stack_b is empty.
void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		pos;

	if (!(*stack_b))
		return ;
	tmp = *stack_b;
	*stack_b = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	tmp = *stack_a;
	pos = 1;
	while (tmp)
	{
		tmp->pos = pos++;
		tmp = tmp->next;
	}
	tmp = *stack_b;
	while (tmp)
	{
		tmp->pos--;
		tmp = tmp->next;
	}
	write(1, "pa\n", 3);
}

// 1. Take the top element from stack_a and push to stack_b
// 2. Update positions in stack_a
// 3. Update positions in stack_b
// NB! Does nothing if stack_b is empty.
void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		pos;

	if (!(*stack_a))
		return;
	tmp = *stack_a;
	*stack_a = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	tmp = *stack_a;
	while (tmp)
	{
		tmp->pos--;
		tmp = tmp->next;
	}
	tmp = *stack_b;
	pos = 1;
	while (tmp)
	{
		tmp->pos = pos++;
		tmp = tmp->next;
	}
	write(1, "pb\n", 3);
}
