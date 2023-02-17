/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 12:59:57 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/17 13:35:37 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.

void	rotate_node(t_node **head_stack, char a_b)
{
	t_node	*last_node;
	
	last_node = search_last_node(*head_stack);
	last_node->next = *head_stack;
	*head_stack = (*head_stack)->next;
	last_node->next->next = NULL;
	ft_printf("\noperation: r%c\n", a_b);
}

// void	rotate_node(t_node **head_stack, char a_b)
// {
// 	t_node		*last_node;
// 	long long	temp;
	
// 	last_node = search_last_node(*head_stack);
// 	temp = (*head_stack)->number;
// 	(*head_stack)->number = last_node->number;
// 	last_node->number = temp;
// 	ft_printf("\noperation: r%c\n", a_b);
// }

// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.

// rr : ra and rb at the same time.

// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.

// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.

// rrr : rra and rrb at the same time.