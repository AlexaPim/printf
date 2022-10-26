/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:26:55 by ado-prad          #+#    #+#             */
/*   Updated: 2022/10/26 21:18:08 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

# define BASEISUPPER "0123456789ABCDEF"
# define BASEISLOWER "0123456789abcdef"

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_check_arg(char flag, va_list list);
int	ft_printf(const char *, ...);

#endif