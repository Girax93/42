/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:31:16 by agrawe            #+#    #+#             */
/*   Updated: 2023/08/29 18:50:49 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// returns what will become the new tail (aka: the second to last node).
// 1. makes the old_tail pointer point to the next node in the list,
// while new_tail points to the node before. (This is for reverse rotates)
// 2. then makes the while loop run while there's something in old_tail->next
// This ensures that new_tail will point to the second-to-last node.
t_stack	*new_tail(t_stack *new_tail)
{
	t_stack	*old_tail;

	if (!new_tail || !new_tail->next)
		return (NULL);
	old_tail = new_tail->next;
	while (old_tail->next)
	{
		new_tail = new_tail->next;
		old_tail = old_tail->next;
	}
	return (new_tail);
}

// Shift down all elements of stack a by 1.
// The last element becomes the first one.
// Also gives every node an updated pos(ition) variable.
// 1. Error handling (returns if there is only 1 or no nodes in the stack)
// 2. Fetches the current tail, and then what will become the new tail.
// 3. Moves the old tail (node) to the front.
// 4. Then updates all the pos(itions) in the stack.
void	reverse_rotate(t_stack **stack)
{
	t_stack	*old_tail;
	t_stack	*updated_tail;
	int		pos;

	if (!*stack || !(*stack)->next)
		return ;
	old_tail = list_tail(*stack);
	updated_tail = new_tail(*stack);
	updated_tail->next = NULL;
	old_tail->next = *stack;
	*stack = old_tail;
	pos = 1;
	old_tail = *stack;
	while (old_tail)
	{
		old_tail->pos = pos++;
		old_tail = old_tail->next;
	}
}

// rra
void	reverse_rotate_a(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

// rrb
void	reverse_rotate_b(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

// rrr
void	reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}
