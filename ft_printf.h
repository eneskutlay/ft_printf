/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekutlay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:23:40 by ekutlay           #+#    #+#             */
/*   Updated: 2022/02/15 02:02:47 by ekutlay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_strlen(char *s);
int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printpercent(void);

int	ft_printnbr(int nb);
int	ft_printunsigned(unsigned int nb);
int	ft_printforhex(unsigned int nb, int loru);//loru is a low or high & hex based
int	ft_printvoidpointer(unsigned long nb);// void pointer hex based
int	ft_printpointerforhex(unsigned long nb);//just add 0x
#endif
