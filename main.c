/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:46:27 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/17 15:24:12 by cter-maa      ########   odam.nl         */
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
	printf("dsf%p\n", head_stack_a);
	head_stack_b = parse_stack(argc, argv);
	
	/*print to check*/
	swap_node(&head_stack_a, 'a');
	//push_node(&head_stack_a, &head_stack_b, 'a');
	//rotate_node(&head_stack_a, 'a');
	print_stack(head_stack_a, 'a');
	print_stack(head_stack_b, 'b');
	system("leaks push_swap");
	return (0);
}