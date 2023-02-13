/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/03 13:33:50 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/03 16:19:59 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct node
{
	int			number;
	char		character;
	struct node	*next;
}	t_node;

void	freenode(t_node *node)
{
	t_node	*temp;
	
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
}

t_node	*makenode(int input_number)
{
	t_node	*node;
	
	node = malloc(sizeof(t_node));
	if (node == NULL)
		return (NULL);
	node->number = input_number;
	node->next = NULL;
	return (node);
}

int	main(int argc, char **argv)
{
	int		index;
	int		input_number;
	t_node	*list;
	t_node 	*node;
	
	index = 1;
	while (index < argc)
	{
		input_number = atoi(argv[index]);
		node = makenode(input_number);
		if (node == NULL)
			return(1);
		node->next = list;
		list = node;
		index++;
	}
	while (list)
	{
		printf("%i\n", list->number);
		list = list->next;
	}
	freenode(node);
	return (0);
}