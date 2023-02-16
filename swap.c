/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/15 12:59:57 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/16 15:58:47 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sa (swap a): Swap the first 2 elements at the top of stack a.
// Do nothing if there is only one or no elements.

void	swap(t_node **head_stack, char c)
{
	long long	temp;

	if (*head_stack && (*head_stack)->next)
	{	
		temp = (*head_stack)->number;
		(*head_stack)->number = (*head_stack)->next->number;
		(*head_stack)->next->number = temp;
	}
	ft_printf("\noperation: s%c\n", c);
}



// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.

// ss : sa and sb at the same time.





// void	swap(long long *number_first_node, long long *number_second_node)
// {
// 	long long temp;
	
// 	temp = *number_first_node;
// 	*number_first_node = *number_second_node;
// 	*number_second_node = temp;
// }

// void	swap_sa(t_node **head_stack, char c)
// {
// 	if (*head_stack && (*head_stack)->next)
// 	{
		
// 		swap(&(*head_stack)->number, &(*head_stack)->next->number);
// 		ft_printf("s%c\n", c);
// 	}
// }

// void	swap(t_node **head_stack, char stack_a_b)
// {
// 	t_node *first_node;
// 	t_node *second_node;

// 	first_node = *head_stack;
// 	if (!first_node)
// 		return;
// 	second_node = first_node->next;
// 	if (!second_node)
// 		return;
// 	first_node->next = second_node->next;
// 	second_node->next = first_node;
// 	*head_stack = second_node; 
// 	ft_printf("s%c\n", stack_a_b);
// }

