/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:46:27 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/09 10:10:05 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	index_argv;
	int	index_argv2;
	int	number;
	
	check_double(argv);
	sign_check(argv);
	index_argv = 1;
	while(argv[index_argv])
	{
		number = ps_atoll(argv[index_argv]);
		printf("%i\n", number);
		index_argv++;
	}
	return(0);
}