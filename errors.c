/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   errors.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:47:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/03/01 11:22:15 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sign_check(char **a)
{
	int	i;
	int	j;

	i = 1;
	while (a[i])
	{
		j = 0;
		while (a[i][j])
		{
			if (((a[i][j] >= '0') && (a[i][j] <= '9')) || (a[i][j] == '-'))
				j++;
			else
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		j = 0;
		if (string_search(a[i]) == 1)
		{
			printf ("Error\n");
			exit(EXIT_FAILURE);
		}
		i++;
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
		printf ("Error\n");
		exit (EXIT_FAILURE);
	}
}

void	check_double(char **argv)
{
	int	i_argv;
	int	i_argv2;

	i_argv = 1;
	while (argv[i_argv])
	{
		i_argv2 = i_argv + 1;
		while (argv[i_argv2])
		{
			if (string_to_llong(argv[i_argv]) == string_to_llong(argv[i_argv2]))
			{
				printf ("Error\n");
				exit (EXIT_FAILURE);
			}
			i_argv2++;
		}
		i_argv++;
	}
}
