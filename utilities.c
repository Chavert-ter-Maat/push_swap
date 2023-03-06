/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilities.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 10:54:42 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/03/06 10:34:12 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *head_stack)
{
	ft_printf("\n");
	while (head_stack)
	{
		ft_printf ("number = %i\n", head_stack->number);
		head_stack = head_stack->next;
	}
	ft_printf("\n");
}

int	count_nodes(t_node *stack)
{
	int		amount;

	amount = 0;
	while (stack)
	{
		amount++;
		stack = stack->next;
	}
	return (amount);
}

void	free_stack(t_node **stack)
{
	t_node	*temp;

	if (!stack)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}

t_node	*search_last(t_node *pointer_node)
{
	if (!pointer_node)
		return (0);
	while (pointer_node->next)
		pointer_node = pointer_node->next;
	return (pointer_node);
}
