/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_errors.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:47:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/09 12:50:03 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sign_check(char **argv)
{
	int index1;
	int	index2;
	
	index1 = 1;
	while(argv[index1])
	{
		index2 = 0;
		while(argv[index1][index2])
		{
			if (((argv[index1][index2] > '0') && (argv[index1][index2] < '9')) ||
			(argv[index1][index2] == '-'))
				index2++;
			else
			{
				printf("program failed");
				exit(EXIT_FAILURE);
			}
		}
		index2 = 0;
		if ((argv[index1][index2] == '-') && (argv[index1][index2 + 1] == '-'))
		{
			printf("program failed");
			exit(EXIT_FAILURE);
		}
		index1++;
	}
}

void	lenght_check(long long int number)
{
	if (number > INT_MAX || number < INT_MIN)
	{
		printf("program failed");
		exit(EXIT_FAILURE);
	}
}

void	check_double(char **argv)
{
	int	index_argv;
	int	index_argv2;
	
	index_argv = 1;
	while (argv[index_argv])
	{
		index_argv2 = index_argv + 1;
		while(argv[index_argv2])
		{
			if (ps_atoll(argv[index_argv]) == ps_atoll(argv[index_argv2]))
				{
					printf("program failed");
					exit(EXIT_FAILURE);
				}
			index_argv2++;
		}
		index_argv++;
	}
}