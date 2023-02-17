/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:58:22 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/17 11:59:24 by cter-maa      ########   odam.nl         */
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
	int				index;
	struct ps_list	*next;
}					t_node;

typedef struct	s_data
{
	int		argc;
	char	argv;
	int		size;
}			t_data;

/* Errors */
void		sign_check(char **argv);
int			string_search(char *string);
void		lenght_check(long long int number);
void		check_double(char **argv);

/* Parsing */
t_node		*parse_stack(int argc, char **argv);
long long	ps_atoll(const char *argv);
t_node		*new_node(long long number, int index);
void		add_node_back(t_node **node_pointer, t_node *new_node);
t_node		*search_last_node(t_node *pointer_stack);

/*Utilities */
void	print_stack(t_node *head_stack, char a_b);
int		stack_size(t_node *head_stack);

/*Operations */
void	swap_node(t_node **head_stack, char stack_a_b);
void	push_node(t_node **head_stack_one, t_node **head_stack_two, char a_b);
void	rotate_node(t_node **head_stack, char a_b);

#endif
