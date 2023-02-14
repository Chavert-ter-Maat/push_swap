/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilities.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/08 14:48:51 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/14 18:27:58 by cter-maa      ########   odam.nl         */
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

// new_list function works

ps_list	*new_node(long long number)
{
	ps_list	*new_node;

	if (!(new_node = malloc(sizeof(ps_list))))
		return (NULL);
	new_node->number = number;
	new_node->next = NULL;
	return (new_node);
}

void	add_node_back(ps_list **node_pointer, ps_list *new_node)
{
	ps_list	*last_node;
	
	if(!*node_pointer)
	{
		*node_pointer = new_node;
		return;
	}
	last_node = search_last_node(*node_pointer);
	last_node->next = new_node;
}

ps_list	*search_last_node(ps_list *list)
{
	if (!list)
		return (NULL);
	while (list->next)
		list = list->next;
	return (list);
}
