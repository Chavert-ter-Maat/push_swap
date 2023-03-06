/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:46:27 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/03/06 10:39:12 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a;

	check_double (argv);
	sign_check (argv);
	stack_a = parse_stack(argc, argv);
	if (argc <= 7)
		short_sort (&stack_a);
	if (argc >= 8)
	{
		index_sort (&stack_a);
		radix_sort (& stack_a);
	}
	free_stack (&stack_a);
	return (0);
}
