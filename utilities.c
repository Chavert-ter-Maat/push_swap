/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilities.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 10:54:42 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/03/01 16:05:28 by cter-maa      ########   odam.nl         */
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

int	count_nodes(t_node *head_stack)
{
	int		amount;

	amount = 0;
	while (head_stack)
	{
		amount++;
		head_stack = head_stack->next;
	}
	return (amount);
}

void	free_stack(t_node **head_stack)
{
	t_node	*temp;

	if (!head_stack)
		return ;
	while (*head_stack)
	{
		temp = (*head_stack)->next;
		free(*head_stack);
		*head_stack = temp;
	}
}

t_node	*search_last(t_node *pointer_node)
{
	if (!pointer_node)
		return (NULL);
	while (pointer_node->next)
		pointer_node = pointer_node->next;
	return (pointer_node);
}
