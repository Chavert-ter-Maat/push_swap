/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operations.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/01 15:36:14 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/03/01 16:07:21 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_node(t_node **head_stack, char a_b)
{
	t_node	*last_node;

	if (!*head_stack)
		return ;
	last_node = search_last(*head_stack);
	last_node->next = *head_stack;
	*head_stack = (*head_stack)->next;
	last_node->next->next = NULL;
	ft_printf("r%c\n", a_b);
}

void	reverse_rotate_node(t_node **head_stack, char a_b)
{
	t_node	*last_node;

	last_node = *head_stack;
	if (!*head_stack || !(*head_stack)->next)
		return ;
	while (last_node->next->next)
		last_node = last_node->next;
	last_node->next->next = *head_stack;
	*head_stack = last_node->next;
	last_node->next = NULL;
	ft_printf("rr%c\n", a_b);
}

void	push_a(t_node **head_stack_a, t_node **head_stack_b)
{
	t_node	*temp_next;

	if (!(*head_stack_b))
		return ;
	temp_next = (*head_stack_b)->next;
	(*head_stack_b)->next = *head_stack_a;
	*head_stack_a = *head_stack_b;
	(*head_stack_b) = temp_next;
	ft_printf("pa\n");
}

void	push_b(t_node **head_stack_a, t_node **head_stack_b)
{
	t_node	*temp_next;

	if (!(*head_stack_a))
		return ;
	temp_next = (*head_stack_a)->next;
	(*head_stack_a)->next = *head_stack_b;
	*head_stack_b = *head_stack_a;
	(*head_stack_a) = temp_next;
	ft_printf("pb\n");
}

void	swap_node(t_node **head_stack, char a_b)
{
	t_node	*temp_second_node;

	if (!(*head_stack && (*head_stack)->next))
		return ;
	temp_second_node = (*head_stack)->next;
	(*head_stack)->next = (*head_stack)->next->next;
	temp_second_node->next = (*head_stack);
	(*head_stack) = temp_second_node;
	ft_printf("s%c\n", a_b);
}
