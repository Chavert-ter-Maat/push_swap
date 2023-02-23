/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 12:59:57 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/23 13:40:05 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

void	push_node(t_node **head_stack_one, t_node **head_stack_two, char a_b)
{
	t_node	*temp_b_next;
	
	if (!(*head_stack_two))
		return ;
	temp_b_next = (*head_stack_two)->next;
	(*head_stack_two)->next = *head_stack_one;
	*head_stack_one = *head_stack_two;
	(*head_stack_two) = temp_b_next;
	printf("\noperation: p%c\n", a_b);
}
