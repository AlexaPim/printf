/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char_and_string.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:08:38 by ado-prad          #+#    #+#             */
/*   Updated: 2022/11/02 00:23:18 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{	
	return (write (1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	else
	{
		while (*(str + i))
		{
			write(1, (str + i), 1);
			i++;
		}
		return (i);
	}
}
