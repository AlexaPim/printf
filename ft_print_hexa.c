/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:32:06 by ado-prad          #+#    #+#             */
/*   Updated: 2022/11/02 00:21:07 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned long number, int flag)
{
	int	count;

	count = 0;
	if (number >= 16)
	{
		count = count + ft_print_hexa((number / 16), flag);
		count = count + ft_print_hexa((number % 16), flag);
	}
	else
	{
		if (flag == 'x')
			return (ft_putchar(BASEISLOWER[number]));
		else
			return (ft_putchar(BASEISUPPER[number]));
	}
	return (count);
}
