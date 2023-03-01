/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 12:01:38 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/03/01 16:26:03 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_node *head_stack_a)
{
	if (head_stack_a && !head_stack_a->next)
		return (true);
	while (head_stack_a)
	{
		if (head_stack_a->next)
		{
			if ((head_stack_a->number) > (head_stack_a->next->number))
				return (false);
		}
		head_stack_a = head_stack_a->next;
	}
	return (true);
}

void	short_sort(t_node **head_stack_a)
{
	int		number_operations;
	t_node	*head_stack_b;

	if (!(*head_stack_a))
		return ;
	head_stack_b = NULL;
	number_operations = 0;
	while (head_stack_b || !check_sorted(*head_stack_a))
	{
		if ((*head_stack_a)->number > (*head_stack_a)->next->number)
			swap_node(head_stack_a, 'a');
		else if ((*head_stack_a)->number > search_last(*head_stack_a)->number)
			reverse_rotate_node(head_stack_a, 'a');
		else if (!check_sorted(*head_stack_a))
			push_b(head_stack_a, &head_stack_b);
		else if (head_stack_b && check_sorted(*head_stack_a))
			push_a(head_stack_a, &head_stack_b);
	}
	if (head_stack_b)
		free_stack(&head_stack_b);
	return ;
}

void	index_sort(t_node **head_stack_a)
{
	t_node	*runner;
	t_node	*temp;
	int		new_index;

	if (!(*head_stack_a))
		return ;
	temp = *head_stack_a;
	while (*head_stack_a)
	{
		runner = temp;
		new_index = 0;
		while (runner)
		{
			if ((*head_stack_a)->number > runner->number)
				new_index++;
			runner = runner->next;
		}
		(*head_stack_a)->index = new_index;
		*head_stack_a = (*head_stack_a)->next;
	}
	*head_stack_a = temp;
}

void	radix_sort(t_node **stack_a)
{
	int		index_binary;
	int		count;
	int		index;
	t_node	*stack_b;

	stack_b = NULL;
	count = count_nodes(*stack_a);
	index_binary = 0;
	while (!check_sorted(*stack_a))
	{
		index = 0;
		while (index < count)
		{
			if (((*stack_a)->index >> index_binary) & 1)
				rotate_node(stack_a, 'a');
			else
				push_b (stack_a, &stack_b);
			index++;
		}
		while (stack_b)
			push_a (stack_a, &stack_b);
		index_binary++;
	}
	if (stack_b)
		free_stack (&stack_b);
}
