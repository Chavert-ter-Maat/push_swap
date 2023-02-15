/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   validations.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:47:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/15 11:55:19 by cter-maa      ########   odam.nl         */
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
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		index2 = 0;
		if ((argv[index1][index2] == '-') && (string_search(argv[index1]) == 1))
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
		index1++;
	}
}

int	string_search(char *string)
{
	int	index;

	index = 1;
	while (string[index] != '-')
	{
		if (string[index] == '\0')
			return (0);
		index++;
	}	
	return (1);
}

void	lenght_check(long long int number)
{
	if (number > INT_MAX || number < INT_MIN)
	{
		printf("Error\n");
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
					printf("Error\n");
					exit(EXIT_FAILURE);
				}
			index_argv2++;
		}
		index_argv++;
	}
}