/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 12:59:57 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/17 11:13:34 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

void	push_node(t_node **head_stack_one, t_node **head_stack_two, char a_b)
{
	t_node	*temp_b;
	t_node	*temp_b_next;
	
	if (!(*head_stack_two))
		return ;
	temp_b = *head_stack_two;
	temp_b_next = (*head_stack_two)->next;
	(*head_stack_two)->next = *head_stack_one;
	*head_stack_one = *head_stack_two;
	(*head_stack_two) = temp_b_next;
	ft_printf("\noperation: p%c\n", a_b);
}


// switches the first of a&b
// void	push(t_node **head_stack_one, t_node **head_stack_two, char stack_a_b)
// {
// 	long long	temp;
	
// 	if (!(*head_stack_two))
// 		return ;
// 	temp = (*head_stack_one)->number;
// 	(*head_stack_one)->number = (*head_stack_two)->number;
// 	(*head_stack_two)->number = temp;
// 	ft_printf("\noperation: p%c\n", stack_a_b);
// }
