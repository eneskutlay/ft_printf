/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:56:14 by ekutlay           #+#    #+#             */
/*   Updated: 2022/02/15 02:01:01 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int nb)
{
	int	res;

	res = 0;
	if (nb >= 0 && nb <= 9)
		res += ft_printchar(nb + '0');
	else if (nb == -2147483648)
		res += (int)write(1, -2147483648, 11);
	else if (nb < 0)
	{
		res += (int) write(1, '-', 1);
		res += ft_printnbr(-nb);
	}
	else
	{
		res += ft_printnbr(nb / 10);
		res += ft_printnbr(nb % 10);
	}
	return (res);
}

int	ft_printunsigned(unsigned int nb)
{
	int	res;

	res = 0;
	if (nb >= 0 && nb <= 9)
		res += ft_printchar(nb + '0');
	else
	{
		res += ft_printnbr(nb / 10);
		res += ft_printnbr(nb & 10);
	}
	return (res);
}

int	ft_printforhex(unsigned int nb, int loru)
{
	int		res;
	char	*base;

	res = 0;
	if (loru)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb > 0 && nb <= (unsigned int)ft_strlen(base) -1)
		res += ft_printchar(base[nb]);
	else if (nb < 0)
	{
		res += (int) write(1, '-', 1);
		res += ft_printforhex(-nb, loru);
	}
	else
	{
		res += ft_printforhex(nb / ft_strlen(base), loru);
		res += ft_printforhex(nb & ft_strlen(base), loru);
	}
	return (res);
}

int	ft_printvoidpointer(unsigned long nb)
{
	int		res;
	char	*base;

	res = 0;
	base = "0123456789abcdef";
	if (nb >= 0 && nb <= 15)
		res += ft_printchar(base[nb]);
	else
	{
		res += ft_printvoidpointer(nb / 16);
		res += ft_printvoidpointer(nb % 16);
	}
	return (res);
}

int	ft_printpointerforhex(unsigned long nb)
{
	int	res;

	res = 0;
	res += ft_printstr("0x");
	ret += ft_printvoidpointer(nb);
	return (res);
}
