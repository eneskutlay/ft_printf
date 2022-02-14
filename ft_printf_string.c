/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:23:15 by ekutlay           #+#    #+#             */
/*   Updated: 2022/02/15 01:02:36 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_printchar(char c)
{
	int	result;

	result = 0;
	result = write(1, &c, 1);
	return (result);
}

int	ft_printstr(char *str)
{
	int	res;
	int	len;

	res = 0;
	if (!str)
		return (write(1, "(null)", 6));
	len = ft_strlen(str);
	res += (int)write(1, str, len);
	return (res);
}

int	ft_printpercent(void)
{
	ft_printchar('%');
	return (1);
}
