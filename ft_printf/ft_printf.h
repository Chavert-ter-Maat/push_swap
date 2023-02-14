/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/17 12:31:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2022/11/29 13:36:07 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// DEFINE
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// INCLUDES
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

// FUNCTIONS
int	ft_printf(const char *str, ...);
int	ft_printstr(char *s);
int	ft_putc(int c);
int	ft_putid(int n);
int	ft_putp(uintptr_t n);
int	ft_putperc(void);
int	ft_puts(char *s);
int	ft_putu(unsigned int n);
int	ft_putx(unsigned int n, const char format);

#endif