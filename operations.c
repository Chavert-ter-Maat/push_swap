/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/01 15:36:14 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/03/06 10:31:51 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_node(t_node **stack, char a_b)
{
	t_node	*last_node;

	if (!*stack)
		return ;
	last_node = search_last(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	last_node->next->next = NULL;
	ft_printf("r%c\n", a_b);
}

void	reverse_rotate_node(t_node **stack, char a_b)
{
	t_node	*last_node;

	last_node = *stack;
	if (!*stack || !(*stack)->next)
		return ;
	while (last_node->next->next)
		last_node = last_node->next;
	last_node->next->next = *stack;
	*stack = last_node->next;
	last_node->next = NULL;
	ft_printf("rr%c\n", a_b);
}

void	push_a(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp_next;

	if (!(*stack_b))
		return ;
	temp_next = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	(*stack_b) = temp_next;
	ft_printf("pa\n");
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp_next;

	if (!(*stack_a))
		return ;
	temp_next = (*stack_a)->next;
	(*stack_a)->next = *stack_b;
	*stack_b = *stack_a;
	(*stack_a) = temp_next;
	ft_printf("pb\n");
}

void	swap_node(t_node **stack, char a_b)
{
	t_node	*temp_second_node;

	if (!(*stack && (*stack)->next))
		return ;
	temp_second_node = (*stack)->next;
	(*stack)->next = (*stack)->next->next;
	temp_second_node->next = (*stack);
	(*stack) = temp_second_node;
	ft_printf("s%c\n", a_b);
}
