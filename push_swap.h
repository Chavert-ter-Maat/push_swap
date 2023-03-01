/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:58:22 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/03/01 16:26:42 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>
# include <stdbool.h>
# include "./ft_printf/ft_printf.h"

typedef struct ps_list
{
	long long		number;
	int				index;
	struct ps_list	*next;
}					t_node;

/* Errors */
void		sign_check(char **argv);
void		lenght_check(long long int number);
void		check_double(char **argv);
int			string_search(char *string);

/* Parsing */
t_node		*parse_stack(int argc, char **argv);
t_node		*new_node(long long number, int index);
long long	string_to_llong(const char *argv);
void		add_node_back(t_node **node_pointer, t_node *new_node);

/*Utilities */
void		print_stack(t_node *head_stack);
void		free_stack(t_node **head_stack);
int			count_nodes(t_node *head_stack);
t_node		*search_last(t_node *pointer_stack);
int			count_digits(t_node *head_stack);

/*Operations */
void		swap_node(t_node **head_stack, char stack_a_b);
void		push_b(t_node **head_stack_a, t_node **head_stack_b);
void		push_a(t_node **head_stack_b, t_node **head_stack_a);
void		rotate_node(t_node **head_stack, char a_b);
void		reverse_rotate_node(t_node **head_stack, char a_b);

/*sorting*/
void		short_sort(t_node **head_stack_a);
void		index_sort(t_node **head_stack_a);
int			check_sorted(t_node *head_stack_a);
void		radix_sort(t_node **stack_a);

#endif
