/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:48:51 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/13 13:45:51 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long int	ps_atoll(const char *argv)
{
	int				index;
	long long int	result;
	int				sign;

	index = 0;
	sign = 1;
	result = 0;
	while ((argv[index] >= 9 && argv[index] <= 13) || (argv[index] == 32))
		index++;
	if (argv[index] == '-')
	{
		if (argv[index] == '-')
			(sign *= -1);
		index++;
	}
	while ((argv[index] >= '0' && argv[index] <= '9') && argv[index])
	{
		result = result * 10 + (argv[index] - '0');
		index++;
	}
	lenght_check(sign * result);
	return (sign * result);
}
