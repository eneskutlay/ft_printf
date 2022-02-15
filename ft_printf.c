/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:11:24 by ekutlay           #+#    #+#             */
/*   Updated: 2022/02/15 04:54:24 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parser(char *format, va_list *arg)
{
	int	choose;

	choose = 0;
	if (*format == 'c')
		choose += ft_printchar((char)va_arg(*arg, int));
	else if (*format == 's')
		choose += ft_printstr((char *)va_arg(*arg, void *));
	else if (*format == 'i' || *format == 'd')
		choose += ft_printnbr(va_arg(*arg, int));
	else if (*format == 'u')
		choose += (unsigned int) ft_printunsigned(va_arg(*arg, int));
	else if (*format == 'x')
		choose += ft_printforhex(va_arg(*arg, unsigned int), 0);
	else if (*format == 'X')
		choose += ft_printforhex(va_arg(*arg, unsigned int), 1);
	else if (*format == '%')
		choose += ft_printpercent();
	else if (*format == 'p')
		choose += ft_printpointerforhex(va_arg(*arg, unsigned long int));
	else
		choose += ft_printchar(*format);
	return (choose);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		res;
	va_list	arg;

	i = 0;
	res = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	while (format[i])
	{
		if (format[i] == '%')
			res += ft_parser((char *)(format + ++i), &arg);
		else
			res += ft_printchar(format[i]);
		i++;
	}
	va_end(arg);
	return (res);
}
