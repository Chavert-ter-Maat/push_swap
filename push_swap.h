/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:58:22 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/14 18:19:18 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include "./ft_printf/ft_printf.h"
#include "./libft/libft.h"

typedef struct a_list
{
	long long		number;
	struct a_list	*next;
}					ps_list;

/* Validation functions */
void	sign_check(char **argv);
void	lenght_check(long long int number);
void	check_double(char **argv);

/* Utility functions */
long long	ps_atoll(const char *argv);
int	string_search(char *string);
ps_list	*new_node(long long number);
void	add_node_back(ps_list **list, ps_list *new_list);
ps_list	*search_last_node(ps_list *list);

#endif