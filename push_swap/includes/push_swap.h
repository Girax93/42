/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:28:36 by agrawe            #+#    #+#             */
/*   Updated: 2023/11/06 19:38:59 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

// pos			= current position. 7, 4, 5 -> 7=1, 4=2, 5=3.
// sorted_pos	= the final sorted position. 7, 4, 5 -> 7=3, 4=1, 5=2.
// val			= the number itself.
// target_pos	= targets CORRECT posision in stack_a
// cost_a		= the cost of getting to the right position in stack A.
// -> IF number is bigger than 0, we will rotate stack_a, before pushing the b.
// cost_b		= the cost of getting the element to the top of the B stack
typedef struct stack
{
	int				pos;
	int				sorted_pos;
	int				val;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct stack	*next;
}	t_stack;

//list operations
t_stack		*fill_stack_a(int ac, char **av);
t_stack		*create_node(int position, int value);
void		add_to_end(t_stack **head, t_stack *new_node);
t_stack		*list_tail(t_stack *list);
int			list_size(t_stack *stack);
void		free_list(t_stack **list);
t_stack		*new_tail(t_stack *new_tail);

//error handling functions
void		write_error(void);
int			num_check(char *av);
int			zero_check(char *av);
int			duplicate_check(char **av);
int			num_str_cmp(const char *s1, const char *s2);
int			is_correct_input(char **av);
int			process_and_check_input(char *arg);

//sort functions
void		sorted_pos(t_stack *stack);
int			sorted_check(t_stack *stack);
void		sort_three(t_stack **stack_a);
void		sorted_push_except_three(t_stack **stack_a, t_stack **stack_b);
void		sort_big(t_stack **stack_a, t_stack **stack_b);
void		set_target_pos(t_stack **stack_a, t_stack **stack_b);
int			find_target_pos(t_stack *stack_a, t_stack *b);
int			closest_higher(t_stack *stack_a, t_stack *b, int *target_sorted);
int			lowest_sorted_pos(t_stack *stack_a, int *target_sorted);
void		get_cost(t_stack **stack_a, t_stack **stack_b);
void		do_best_move(t_stack **stack_a, t_stack **stack_b);
void		move_to_a(t_stack **a, t_stack **b, int cost_a, int cost_b);
void		rev_rot_ab(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
void		rot_ab(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
void		rotate_a_to_pos(t_stack **a, int *cost_a);
void		rotate_b_to_pos(t_stack **b, int *cost_b);
void		shift_stack(t_stack **stack_a);
void		push_swap(t_stack **stack_a, t_stack **stack_b);

//operations
void		swap(t_stack **stack);
void		swap_a(t_stack **stack_a);
void		swap_b(t_stack **stack_b);
void		swap_ab(t_stack **stack_a, t_stack **stack_b);
void		push_a(t_stack **stack_a, t_stack **stack_b);
void		push_b(t_stack **stack_a, t_stack **stack_b);
void		rotate(t_stack **stack);
void		rotate_a(t_stack **stack_a);
void		rotate_b(t_stack **stack_b);
void		rotate_ab(t_stack **stack_a, t_stack **stack_b);
void		reverse_rotate(t_stack **stack);
void		reverse_rotate_a(t_stack **stack_a);
void		reverse_rotate_b(t_stack **stack_b);
void		reverse_rotate_ab(t_stack **stack_a, t_stack **stack_b);

// util functions
long int	ft_atol(const char *str);
int			find_highest(t_stack *stack);
int			find_lowest_pos(t_stack **stack);
int			abs_num(int num);
void		remove_leading_zeros(char *av);

#endif
