/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:23:40 by ekutlay           #+#    #+#             */
/*   Updated: 2022/02/15 03:52:13 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_strlen(char *s);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printpercent(void);

int	ft_printnbr(int nb);
int	ft_printunsigned(unsigned int nb);
int	ft_printforhex(unsigned int nb, int loru);
int	ft_printvoidpointer(unsigned long nb);
int	ft_printpointerforhex(unsigned long nb);

int	ft_parser(char *format, va_list *arg);
int	ft_printf(const char *format, ...);
#endif
