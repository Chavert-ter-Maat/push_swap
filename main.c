/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:46:27 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/14 18:29:19 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int			index_argv;
	ps_list		*node_pointer;
	long long	number;
	
	node_pointer = NULL;
	check_double(argv);
	sign_check(argv);
	index_argv = 1;
	while(argc > index_argv)
	{
		number = ps_atoll(argv[index_argv]);
		add_node_back(&node_pointer, new_node(number));
		index_argv++;
	}
	while (node_pointer)
	{
		printf("%lli\n",node_pointer->number);
		node_pointer = node_pointer->next;
	}
	return(0);
}