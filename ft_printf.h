/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:26:55 by ado-prad          #+#    #+#             */
/*   Updated: 2022/11/02 00:20:18 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

# define BASEISUPPER "0123456789ABCDEF"
# define BASEISLOWER "0123456789abcdef"

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_check_arg(char flag, va_list list);
int	ft_print_hexa(unsigned long number, int flag);
int	ft_print_int(int n);
int	ft_print_pointer(unsigned long int ptr);
int	ft_print_unsigned(unsigned int n);
int	ft_printf(const char *format, ...);

#endif