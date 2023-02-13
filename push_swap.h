/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 10:58:22 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/02/13 16:32:27 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H



#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>

/* Validation functions */
void	sign_check(char **argv);
void	lenght_check(long long int number);
void	check_double(char **argv);

/* Utility functions */
long long int	ps_atoll(const char *argv);

#endif