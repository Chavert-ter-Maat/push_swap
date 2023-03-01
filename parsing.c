/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:48:51 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/03/01 16:24:00 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*parse_stack(int argc, char **argv)
{
	int			index_argv;
	long long	number;
	int			index;
	t_node		*new_stack;

	new_stack = NULL;
	index_argv = 1;
	index = 0;
	while (argc > index_argv)
	{
		number = string_to_llong(argv[index_argv]);
		add_node_back(&new_stack, new_node(number, index));
		index_argv++;
		index++;
	}
	return (new_stack);
}

long long	string_to_llong(const char *argv)
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

t_node	*new_node(long long number, int index)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->number = number;
	new_node->index = index;
	new_node->next = NULL;
	return (new_node);
}

void	add_node_back(t_node **node_pointer, t_node *new_node)
{
	t_node	*last_node;

	if (!*node_pointer)
	{
		*node_pointer = new_node;
		return ;
	}
	last_node = search_last(*node_pointer);
	last_node->next = new_node;
}
