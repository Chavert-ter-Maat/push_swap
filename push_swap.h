/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:58:22 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/15 14:38:08 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include "./ft_printf/ft_printf.h"

typedef struct ps_list
{
	long long		number;
	struct ps_list	*next;
}					t_node;

typedef struct	s_data
{
	int		argc;
	char	argv;
	int		size;
	t_node	*head;
}			t_data;

/* Error handling */
void		sign_check(char **argv);
void		lenght_check(long long int number);
void		check_double(char **argv);

/* Utility functions */
long long	ps_atoll(const char *argv);
int			string_search(char *string);
t_node		*new_node(long long number);
void		add_node_back(t_node **node_pointer, t_node *new_node);
t_node		*search_last_node(t_node *list);

#endif
