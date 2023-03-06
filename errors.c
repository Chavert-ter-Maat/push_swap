/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   errors.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:47:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/03/03 09:49:51 by cter-maa      ########   odam.nl         */
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
				ft_printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		j = 0;
		if (string_search(a[i]) == 1)
		{
			ft_printf ("Error\n");
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
		ft_printf ("Error\n");
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
				ft_printf ("Error\n");
				exit (EXIT_FAILURE);
			}
			i_argv2++;
		}
		i_argv++;
	}
}
