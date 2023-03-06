/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 12:01:38 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/03/06 10:33:52 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_node *stack_a)
{
	if (stack_a && !stack_a->next)
		return (true);
	while (stack_a)
	{
		if (stack_a->next)
		{
			if ((stack_a->number) > (stack_a->next->number))
				return (false);
		}
		stack_a = stack_a->next;
	}
	return (true);
}

void	short_sort(t_node **stack_a)
{
	int		number_operations;
	t_node	*stack_b;

	if (!(*stack_a))
		return ;
	stack_b = NULL;
	number_operations = 0;
	while (stack_b || !check_sorted(*stack_a))
	{
		if ((*stack_a)->number > (*stack_a)->next->number)
			swap_node(stack_a, 'a');
		else if ((*stack_a)->number > search_last(*stack_a)->number)
			reverse_rotate_node(stack_a, 'a');
		else if (!check_sorted(*stack_a))
			push_b(stack_a, &stack_b);
		else if (stack_b && check_sorted(*stack_a))
			push_a(stack_a, &stack_b);
	}
	if (stack_b)
		free_stack(&stack_b);
	return ;
}

void	index_sort(t_node **stack_a)
{
	t_node	*runner;
	t_node	*temp;
	int		new_index;

	if (!(*stack_a))
		return ;
	temp = *stack_a;
	while (*stack_a)
	{
		runner = temp;
		new_index = 0;
		while (runner)
		{
			if ((*stack_a)->number > runner->number)
				new_index++;
			runner = runner->next;
		}
		(*stack_a)->index = new_index;
		*stack_a = (*stack_a)->next;
	}
	*stack_a = temp;
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
