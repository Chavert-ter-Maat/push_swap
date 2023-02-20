/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 12:59:57 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/20 18:37:05 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.

void	rotate_node(t_node **head_stack, char a_b)
{
	t_node	*last_node;
	
	if (!*head_stack)
		return ;
	last_node = search_last_node(*head_stack);
	last_node->next = *head_stack;
	*head_stack = (*head_stack)->next;
	last_node->next->next = NULL;
	printf("\noperation: r%c\n", a_b);
}

void	reverse_rotate_node(t_node **head_stack, char a_b)
{
	t_node *last_node;

	last_node = *head_stack;
	if (!*head_stack || !(*head_stack)->next)
		 return ;
	while (last_node->next->next)
		last_node = last_node->next;
	last_node->next->next = *head_stack;
	*head_stack = last_node->next;
	last_node->next = NULL;
	printf("\noperation: rra%c\n", a_b);
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