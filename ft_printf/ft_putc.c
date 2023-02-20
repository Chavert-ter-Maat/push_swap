/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putc.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/19 12:31:26 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/02/20 17:01:03 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putc(int character)
{
	return (write(1, &character, 1));
}
