/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:46:27 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/15 15:57:54 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void initialize()
{
	
}

int	main(int argc, char **argv)
{
	int			index_argv;
	t_node		*head_stack_a;
	t_node		*current;
	long long	number;
	
	head_stack_a = NULL;
	check_double(argv);
	sign_check(argv);
	index_argv = 1;
	while(argc > index_argv)
	{
		number = ps_atoll(argv[index_argv]);
		add_node_back(&head_stack_a, new_node(number));
		index_argv++;
	}
	current = head_stack_a;
	
	// print stack a
	while (current)
	{
		printf("%lli\n",current->number);
		current = current->next;
	}
	return(0);
}