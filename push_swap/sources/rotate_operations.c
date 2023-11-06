/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:31:28 by agrawe            #+#    #+#             */
/*   Updated: 2023/11/06 20:00:27 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// Shift up all elements of stack a by 1.
// The first element becomes the last one.
// 1. Error handling - checks if there is only 1 or 0 node(s) in the stack
// 2. Removes the head and attaches it to the end
// 3. Updates all the pos(itions) of the stack
// 4. Updates the position of the former head (now last element).
void	rotate(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tail;
	int		size;

	if (!*stack || !(*stack)->next)
		return ;
	head = *stack;
	*stack = head->next;
	head->next = NULL;
	tail = list_tail(*stack);
	tail->next = head;
	size = list_size(*stack);
	tail = *stack;
	while (tail)
	{
		tail->pos--;
		tail = tail->next;
	}
	head->pos = size;
}

// ra (first becomes last)
void	rotate_a(t_stack **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

//rb (first becomes last)
void	rotate_b(t_stack **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

//rr (first node in both stacks becomes the last)
void	rotate_ab(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}
