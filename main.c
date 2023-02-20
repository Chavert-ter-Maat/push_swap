/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:46:27 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/20 18:20:43 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node		*head_stack_a;
	t_node		*head_stack_b;
	
	/*check for errors in input*/
	check_double(argv);
	sign_check(argv);
	
	/*parse to stack a*/
	head_stack_a = parse_stack(argc, argv);
	head_stack_b = parse_stack(argc, argv);
	
	/*operations*/
	//swap_node(&head_stack_a, 'a');
	//push_node(&head_stack_a, &head_stack_b, 'a');
	//rotate_node(&head_stack_a, 'a');
	reverse_rotate_node(&head_stack_a, 'a');

	/*print stacks*/
	print_stack(head_stack_a, 'a');
	print_stack(head_stack_b, 'b');
	return (0);
}