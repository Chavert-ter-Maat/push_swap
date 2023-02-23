/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/23 12:01:38 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/23 18:02:32 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_node *head_stack_a)
{
	// if (head_stack_a && !head_stack_a->next)
	// 	return (true);
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

void	simple_sort(t_node **head_stack_a)
{
	while (!check_sorted(*head_stack_a))
		{
			if ((*head_stack_a)->number > search_last_node(*head_stack_a)->number)
				reverse_rotate_node(head_stack_a, 'a');
			else
				swap_node(head_stack_a, 'a');
		}
	printf("daagh\n");
	return ;
}