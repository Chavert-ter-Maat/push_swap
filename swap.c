/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 12:59:57 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/17 14:37:38 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.


void	swap_node(t_node **head_stack, char a_b)
{
	t_node	*temp_second_node;

	if (!(*head_stack && (*head_stack)->next))
		return ;
	temp_second_node = (*head_stack)->next;
	(*head_stack)->next = (*head_stack)->next->next;
	temp_second_node->next = (*head_stack);
	(*head_stack) = temp_second_node;
	ft_printf("\noperation: s%c\n", a_b);
}


// void	swap_node(t_node **head_stack, char a_b)
// {
// 	t_node	*temp;

// 	if (*head_stack && (*head_stack)->next)
// 	{	
// 		temp = (*head_stack);
// 		(*head_stack) = (*head_stack)->next;
// 		(*head_stack)->next = temp;
// 	}
// 	ft_printf("\noperation: s%c\n", a_b);
// }



// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.

// ss : sa and sb at the same time.

