/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putperc.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/23 11:25:00 by cter-maa      #+#    #+#                 */
/*   Updated: 2022/11/29 11:25:25 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putperc(void)
{
	return (write(1, "%", 1));
}
