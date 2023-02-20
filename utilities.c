/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilities.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/16 10:54:42 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/20 17:03:06 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node *head_stack, char a_b)
{
	if (a_b == 'a')
		printf("------------ stack a ------------\n");
	else
		printf("------------ stack b ------------\n");
	while (head_stack)
	{
		printf("(index = %i) ",head_stack->index);
		printf("(%lli = number)\n",head_stack->number);
		head_stack = head_stack->next;
	}
	printf("---------------------------------\n\n");
}

int	stack_size(t_node *head_stack)
{
	int		amount;

	amount = 0;
	while(head_stack)
	{
		amount++;
		head_stack = head_stack->next;
	}
	return (amount);
}
